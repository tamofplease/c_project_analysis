# 1 "project/radare2/libr/anal/block.c"


#include <r_anal.h>
#include <r_hash.h>
#include <ht_uu.h>

#define unwrap(rbnode) container_of (rbnode, RAnalBlock, _rb)

static void __max_end(RBNode *node) {
 RAnalBlock *block = unwrap (node);
 block->_max_end = block->addr + block->size;
 int i;
 for (i = 0; i < 2; i++) {
  if (node->child[i]) {
   ut64 end = unwrap (node->child[i])->_max_end;
   if (end > block->_max_end) {
    block->_max_end = end;
   }
  }
 }
}

static int __bb_addr_cmp(const void *incoming, const RBNode *in_tree, void *user) {
 ut64 incoming_addr = *(ut64 *)incoming;
 const RAnalBlock *in_tree_block = container_of (in_tree, const RAnalBlock, _rb);
 if (incoming_addr < in_tree_block->addr) {
  return -1;
 }
 if (incoming_addr > in_tree_block->addr) {
  return 1;
 }
 return 0;
}

#define D if (anal && anal->verbose)

R_API void r_anal_block_ref(RAnalBlock *bb) {

 r_return_if_fail (bb->ref > 0);
 bb->ref++;
}

#define DFLT_NINSTR 3

static RAnalBlock *block_new(RAnal *a, ut64 addr, ut64 size) {
 RAnalBlock *block = R_NEW0 (RAnalBlock);
 if (!block) {
  return NULL;
 }
 block->addr = addr;
 block->size = size;
 block->anal = a;
 block->ref = 1;
 block->jump = UT64_MAX;
 block->fail = UT64_MAX;
 block->op_pos = R_NEWS0 (ut16, DFLT_NINSTR);
 block->op_pos_size = DFLT_NINSTR;
 block->stackptr = 0;
 block->parent_stackptr = INT_MAX;
 block->cmpval = UT64_MAX;
 block->fcns = r_list_new ();
 if (size) {
  r_anal_block_update_hash (block);
 }
 return block;
}

static void block_free(RAnalBlock *block) {
 if (!block) {
  return;
 }
 r_anal_cond_free (block->cond);
 free (block->fingerprint);
 r_anal_diff_free (block->diff);
 free (block->op_bytes);
 r_anal_switch_op_free (block->switch_op);
 r_list_free (block->fcns);
 free (block->op_pos);
 free (block->parent_reg_arena);
 free (block);
}

void __block_free_rb(RBNode *node, void *user) {
 RAnalBlock *block = unwrap (node);
 block_free (block);
}

R_API RAnalBlock *r_anal_get_block_at(RAnal *anal, ut64 addr) {
 RBNode *node = r_rbtree_find (anal->bb_tree, &addr, __bb_addr_cmp, NULL);
 return node? unwrap (node): NULL;
}


static bool all_in(RAnalBlock *node, ut64 addr, RAnalBlockCb cb, void *user) {
 while (node && addr < node->addr) {

  node = unwrap (node->_rb.child[0]);
 }
 if (!node) {
  return true;
 }
 if (addr >= node->_max_end) {
  return true;
 }
 if (addr < node->addr + node->size) {
  if (!cb (node, user)) {
   return false;
  }
 }

 if (!all_in (unwrap (node->_rb.child[0]), addr, cb, user)) {
  return false;
 }
 if (!all_in (unwrap (node->_rb.child[1]), addr, cb, user)) {
  return false;
 }
 return true;
}

R_API bool r_anal_blocks_foreach_in(RAnal *anal, ut64 addr, RAnalBlockCb cb, void *user) {
 return all_in (anal->bb_tree ? unwrap (anal->bb_tree) : NULL, addr, cb, user);
}

static bool block_list_cb(RAnalBlock *block, void *user) {
 RList *list = user;
 r_anal_block_ref (block);
 r_list_push (list, block);
 return true;
}

R_API RList *r_anal_get_blocks_in(RAnal *anal, ut64 addr) {
 RList *list = r_list_newf ((RListFree)r_anal_block_unref);
 if (list) {
  r_anal_blocks_foreach_in (anal, addr, block_list_cb, list);
 }
 return list;
}

static void all_intersect(RAnalBlock *node, ut64 addr, ut64 size, RAnalBlockCb cb, void *user) {
 ut64 end = addr + size;
 while (node && end <= node->addr) {

  node = unwrap (node->_rb.child[0]);
 }
 if (!node) {
  return;
 }
 if (addr >= node->_max_end) {
  return;
 }
 if (addr < node->addr + node->size) {
  cb (node, user);
 }

 all_intersect (unwrap (node->_rb.child[0]), addr, size, cb, user);
 all_intersect (unwrap (node->_rb.child[1]), addr, size, cb, user);
}

R_API void r_anal_blocks_foreach_intersect(RAnal *anal, ut64 addr, ut64 size, RAnalBlockCb cb, void *user) {
 all_intersect (anal->bb_tree ? unwrap (anal->bb_tree) : NULL, addr, size, cb, user);
}

R_API RList *r_anal_get_blocks_intersect(RAnal *anal, ut64 addr, ut64 size) {
 RList *list = r_list_newf ((RListFree)r_anal_block_unref);
 if (!list) {
  return NULL;
 }
 r_anal_blocks_foreach_intersect (anal, addr, size, block_list_cb, list);
 return list;
}

R_API RAnalBlock *r_anal_create_block(RAnal *anal, ut64 addr, ut64 size) {
 if (r_anal_get_block_at (anal, addr)) {
  return NULL;
 }
 RAnalBlock *block = block_new (anal, addr, size);
 if (!block) {
  return NULL;
 }
 r_rbtree_aug_insert (&anal->bb_tree, &block->addr, &block->_rb, __bb_addr_cmp, NULL, __max_end);
 return block;
}

R_API void r_anal_delete_block(RAnalBlock *bb) {
 r_anal_block_ref (bb);
 while (!r_list_empty (bb->fcns)) {
  r_anal_function_remove_block (r_list_first (bb->fcns), bb);
 }
 r_anal_block_unref (bb);
}

R_API void r_anal_block_set_size(RAnalBlock *block, ut64 size) {
 if (block->size == size) {
  return;
 }


 RAnalFunction *fcn;
 RListIter *iter;
 r_list_foreach (block->fcns, iter, fcn) {
  if (fcn->meta._min != UT64_MAX && fcn->meta._max == block->addr + block->size) {
   fcn->meta._max = block->addr + size;
  }
 }


 block->size = size;
 r_rbtree_aug_update_sum (block->anal->bb_tree, &block->addr, &block->_rb, __bb_addr_cmp, NULL, __max_end);
}

R_API bool r_anal_block_relocate(RAnalBlock *block, ut64 addr, ut64 size) {
 if (block->addr == addr) {
  r_anal_block_set_size (block, size);
  r_anal_block_update_hash (block);
  return true;
 }
 if (r_anal_get_block_at (block->anal, addr)) {

  return false;
 }


 RAnalFunction *fcn;
 RListIter *iter;
 r_list_foreach (block->fcns, iter, fcn) {
  if (fcn->meta._min != UT64_MAX) {
   if (addr + size > fcn->meta._max) {

    fcn->meta._max = addr + size;
   } else if (block->addr + block->size == fcn->meta._max && addr + size != block->addr + block->size) {

    fcn->meta._min = UT64_MAX;
    continue;
   }
   if (block->addr < fcn->meta._min) {

    fcn->meta._min = addr;
   } else if (block->addr == fcn->meta._min && addr != block->addr) {

    fcn->meta._min = UT64_MAX;
   }
  }
 }

 r_rbtree_aug_delete (&block->anal->bb_tree, &block->addr, __bb_addr_cmp, NULL, NULL, NULL, __max_end);
 block->addr = addr;
 block->size = size;
 r_anal_block_update_hash (block);
 r_rbtree_aug_insert (&block->anal->bb_tree, &block->addr, &block->_rb, __bb_addr_cmp, NULL, __max_end);
 return true;
}

R_API RAnalBlock *r_anal_block_split(RAnalBlock *bbi, ut64 addr) {
 RAnal *anal = bbi->anal;
 r_return_val_if_fail (bbi && addr >= bbi->addr && addr < bbi->addr + bbi->size && addr != UT64_MAX, 0);
 if (addr == bbi->addr) {
  r_anal_block_ref (bbi);
  return bbi;
 }

 if (r_anal_get_block_at (bbi->anal, addr)) {

  return NULL;
 }


 RAnalBlock *bb = block_new (anal, addr, bbi->addr + bbi->size - addr);
 if (!bb) {
  return NULL;
 }
 bb->jump = bbi->jump;
 bb->fail = bbi->fail;
 bb->parent_stackptr = bbi->stackptr;
 bb->switch_op = bbi->switch_op;


 r_anal_block_set_size (bbi, addr - bbi->addr);
 bbi->jump = addr;
 bbi->fail = UT64_MAX;
 bbi->switch_op = NULL;
 r_anal_block_update_hash (bbi);


 r_rbtree_aug_insert (&anal->bb_tree, &bb->addr, &bb->_rb, __bb_addr_cmp, NULL, __max_end);


 RListIter *iter;
 RAnalFunction *fcn;
 r_list_foreach (bbi->fcns, iter, fcn) {
  r_anal_function_add_block (fcn, bb);
 }


 int i;
 i = 0;
 while (i < bbi->ninstr && r_anal_bb_offset_inst (bbi, i) < bbi->size) {
  i++;
 }
 int new_bbi_instr = i;
 if (bb->addr - bbi->addr == r_anal_bb_offset_inst (bbi, i)) {
  bb->ninstr = 0;
  while (i < bbi->ninstr) {
   ut16 off_op = r_anal_bb_offset_inst (bbi, i);
   if (off_op >= bbi->size + bb->size) {
    break;
   }
   r_anal_bb_set_offset (bb, bb->ninstr, off_op - bbi->size);
   bb->ninstr++;
   i++;
  }
 }
 bbi->ninstr = new_bbi_instr;
 return bb;
}

R_API bool r_anal_block_merge(RAnalBlock *a, RAnalBlock *b) {
 if (!r_anal_block_is_contiguous (a, b)) {
  return false;
 }


 if (r_list_length (a->fcns) != r_list_length (b->fcns)) {
  return false;
 }
 RAnalFunction *fcn;
 RListIter *iter;
 r_list_foreach (a->fcns, iter, fcn) {
  if (!r_list_contains (b->fcns, fcn)) {
   return false;
  }
 }


 r_anal_block_ref (b);
 while (!r_list_empty (b->fcns)) {
  r_anal_function_remove_block (r_list_first (b->fcns), b);
 }


 size_t i;
 for (i = 0; i < b->ninstr; i++) {
  r_anal_bb_set_offset (a, a->ninstr++, a->size + r_anal_bb_offset_inst (b, i));
 }


 a->size += b->size;
 a->jump = b->jump;
 a->fail = b->fail;
 if (a->switch_op) {
  if (a->anal->verbose) {
   eprintf ("Dropping switch table at 0x%" PFMT64x " of block at 0x%" PFMT64x "\n", a->switch_op->addr, a->addr);
  }
  r_anal_switch_op_free (a->switch_op);
 }
 a->switch_op = b->switch_op;
 b->switch_op = NULL;
 r_anal_block_update_hash (a);


 r_rbtree_aug_delete (&a->anal->bb_tree, &b->addr, __bb_addr_cmp, NULL, __block_free_rb, NULL, __max_end);


 r_list_foreach (a->fcns, iter, fcn) {
  fcn->meta._min = UT64_MAX;
 }

 return true;
}

R_API void r_anal_block_unref(RAnalBlock *bb) {
 if (!bb) {
  return;
 }
 r_return_if_fail (bb->ref > 0);
 bb->ref--;
 r_return_if_fail (bb->ref >= r_list_length (bb->fcns));
 if (bb->ref < 1) {
  RAnal *anal = bb->anal;
  r_return_if_fail (!bb->fcns || r_list_empty (bb->fcns));
  r_rbtree_aug_delete (&anal->bb_tree, &bb->addr, __bb_addr_cmp, NULL, __block_free_rb, NULL, __max_end);
 }
}

R_API bool r_anal_block_successor_addrs_foreach(RAnalBlock *block, RAnalAddrCb cb, void *user) {
#define CB_ADDR(addr) do { \
  if (addr == UT64_MAX) { \
   break; \
  } \
  if (!cb (addr, user)) { \
   return false; \
  } \
 } while(0);

 CB_ADDR (block->jump);
 CB_ADDR (block->fail);
 if (block->switch_op && block->switch_op->cases) {
  RListIter *iter;
  RAnalCaseOp *caseop;
  r_list_foreach (block->switch_op->cases, iter, caseop) {
   CB_ADDR (caseop->jump);
  }
 }

 return true;
#undef CB_ADDR
}

typedef struct r_anal_block_recurse_context_t {
 RAnal *anal;
 RPVector to_visit;
 HtUP *visited;
} RAnalBlockRecurseContext;

static bool block_recurse_successor_cb(ut64 addr, void *user) {
 RAnalBlockRecurseContext *ctx = user;
 if (ht_up_find_kv (ctx->visited, addr, NULL)) {

  return true;
 }
 ht_up_insert (ctx->visited, addr, NULL);
 RAnalBlock *block = r_anal_get_block_at (ctx->anal, addr);
 if (!block) {
  return true;
 }
 r_pvector_push (&ctx->to_visit, block);
 return true;
}

R_API bool r_anal_block_recurse(RAnalBlock *block, RAnalBlockCb cb, void *user) {
 bool breaked = false;
 RAnalBlockRecurseContext ctx;
 ctx.anal = block->anal;
 r_pvector_init (&ctx.to_visit, NULL);
 ctx.visited = ht_up_new0 ();
 if (!ctx.visited) {
  goto beach;
 }

 ht_up_insert (ctx.visited, block->addr, NULL);
 r_pvector_push (&ctx.to_visit, block);

 while (!r_pvector_empty (&ctx.to_visit)) {
  RAnalBlock *cur = r_pvector_pop (&ctx.to_visit);
  breaked = !cb (cur, user);
  if (breaked) {
   break;
  }
  r_anal_block_successor_addrs_foreach (cur, block_recurse_successor_cb, &ctx);
 }

beach:
 ht_up_free (ctx.visited);
 r_pvector_clear (&ctx.to_visit);
 return !breaked;
}

R_API bool r_anal_block_recurse_followthrough(RAnalBlock *block, RAnalBlockCb cb, void *user) {
 bool breaked = false;
 RAnalBlockRecurseContext ctx;
 ctx.anal = block->anal;
 r_pvector_init (&ctx.to_visit, NULL);
 ctx.visited = ht_up_new0 ();
 if (!ctx.visited) {
  goto beach;
 }

 ht_up_insert (ctx.visited, block->addr, NULL);
 r_pvector_push (&ctx.to_visit, block);

 while (!r_pvector_empty (&ctx.to_visit)) {
  RAnalBlock *cur = r_pvector_pop (&ctx.to_visit);
  bool b = !cb (cur, user);
  if (b) {
   breaked = true;
  } else {
   r_anal_block_successor_addrs_foreach (cur, block_recurse_successor_cb, &ctx);
  }
 }

beach:
 ht_up_free (ctx.visited);
 r_pvector_clear (&ctx.to_visit);
 return !breaked;
}

typedef struct {
 RAnalBlock *bb;
 RListIter *switch_it;
} RecurseDepthFirstCtx;

R_API bool r_anal_block_recurse_depth_first(RAnalBlock *block, RAnalBlockCb cb, R_NULLABLE RAnalBlockCb on_exit, void *user) {
 bool breaked = false;
 if (!block) {
  return false;
 }
 HtUP *visited = ht_up_new0 ();
 if (!visited) {
  goto beach;
 }
 RAnal *anal = block->anal;
 RVector path;
 r_vector_init (&path, sizeof (RecurseDepthFirstCtx), NULL, NULL);
 RAnalBlock *cur_bb = block;
 RecurseDepthFirstCtx ctx = { cur_bb, NULL };
 r_vector_push (&path, &ctx);
 ht_up_insert (visited, cur_bb->addr, NULL);
 breaked = !cb (cur_bb, user);
 if (breaked) {
  goto beach;
 }
 do {
  RecurseDepthFirstCtx *cur_ctx = r_vector_index_ptr (&path, path.len - 1);
  cur_bb = cur_ctx->bb;
  if (cur_bb->jump != UT64_MAX && !ht_up_find_kv (visited, cur_bb->jump, NULL)) {
   cur_bb = r_anal_get_block_at (anal, cur_bb->jump);
  } else if (cur_bb->fail != UT64_MAX && !ht_up_find_kv (visited, cur_bb->fail, NULL)) {
   cur_bb = r_anal_get_block_at (anal, cur_bb->fail);
  } else {
   RAnalCaseOp *cop = NULL;
   if (cur_bb->switch_op && !cur_ctx->switch_it) {
    cur_ctx->switch_it = cur_bb->switch_op->cases->head;
    cop = r_list_first (cur_bb->switch_op->cases);
   } else if (cur_ctx->switch_it) {
    while ((cur_ctx->switch_it = r_list_iter_get_next (cur_ctx->switch_it))) {
     cop = r_list_iter_get_data (cur_ctx->switch_it);
     if (!ht_up_find_kv (visited, cop->jump, NULL)) {
      break;
     }
     cop = NULL;
    }
   }
   cur_bb = cop ? r_anal_get_block_at (anal, cop->jump) : NULL;
  }
  if (cur_bb) {
   RecurseDepthFirstCtx ctx = { cur_bb, NULL };
   r_vector_push (&path, &ctx);
   ht_up_insert (visited, cur_bb->addr, NULL);
   bool breaked = !cb (cur_bb, user);
   if (breaked) {
    break;
   }
  } else {
   if (on_exit) {
    on_exit (cur_ctx->bb, user);
   }
   r_vector_pop (&path, NULL);
  }
 } while (!r_vector_empty (&path));

beach:
 ht_up_free (visited);
 r_vector_clear (&path);
 return !breaked;
}

static bool recurse_list_cb(RAnalBlock *block, void *user) {
 RList *list = user;
 r_anal_block_ref (block);
 r_list_push (list, block);
 return true;
}

R_API RList *r_anal_block_recurse_list(RAnalBlock *block) {
 RList *ret = r_list_newf ((RListFree)r_anal_block_unref);
 if (ret) {
  r_anal_block_recurse (block, recurse_list_cb, ret);
 }
 return ret;
}

R_API void r_anal_block_add_switch_case(RAnalBlock *block, ut64 switch_addr, ut64 case_value, ut64 case_addr) {
 if (!block->switch_op) {
  block->switch_op = r_anal_switch_op_new (switch_addr, 0, 0, 0);
 }
 r_anal_switch_op_add_case (block->switch_op, case_addr, case_value, case_addr);
}

R_API bool r_anal_block_op_starts_at(RAnalBlock *bb, ut64 addr) {
 if (!r_anal_block_contains (bb, addr)) {
  return false;
 }
 ut64 off = addr - bb->addr;
 if (off > UT16_MAX) {
  return false;
 }
 size_t i;
 for (i = 0; i < bb->ninstr; i++) {
  ut16 inst_off = r_anal_bb_offset_inst (bb, i);
  if (off == inst_off) {
   return true;
  }
 }
 return false;
}

typedef struct {
 RAnal *anal;
 RAnalBlock *cur_parent;
 ut64 dst;
 RPVector *next_visit;
 HtUP *visited;
} PathContext;

static bool shortest_path_successor_cb(ut64 addr, void *user) {
 PathContext *ctx = user;
 if (ht_up_find_kv (ctx->visited, addr, NULL)) {

  return true;
 }
 ht_up_insert (ctx->visited, addr, ctx->cur_parent);
 RAnalBlock *block = r_anal_get_block_at (ctx->anal, addr);
 if (block) {
  r_pvector_push (ctx->next_visit, block);
 }
 return addr != ctx->dst;
}


R_API R_NULLABLE RList *r_anal_block_shortest_path(RAnalBlock *block, ut64 dst) {
 RList *ret = NULL;
 PathContext ctx;
 ctx.anal = block->anal;
 ctx.dst = dst;


 RPVector visit_a;
 r_pvector_init (&visit_a, NULL);
 RPVector visit_b;
 r_pvector_init (&visit_b, NULL);
 ctx.next_visit = &visit_a;
 RPVector *cur_visit = &visit_b;

 ctx.visited = ht_up_new0 ();
 if (!ctx.visited) {
  goto beach;
 }

 ht_up_insert (ctx.visited, block->addr, NULL);
 r_pvector_push (cur_visit, block);


 while (!r_pvector_empty (cur_visit)) {
  void **it;
  r_pvector_foreach (cur_visit, it) {
   RAnalBlock *cur = *it;
   ctx.cur_parent = cur;
   r_anal_block_successor_addrs_foreach (cur, shortest_path_successor_cb, &ctx);
  }
  RPVector *tmp = cur_visit;
  cur_visit = ctx.next_visit;
  ctx.next_visit = tmp;
  r_pvector_clear (ctx.next_visit);
 }


 bool found = false;
 RAnalBlock *prev = ht_up_find (ctx.visited, dst, &found);
 RAnalBlock *dst_block = r_anal_get_block_at (block->anal, dst);
 if (found && dst_block) {
  ret = r_list_newf ((RListFree)r_anal_block_unref);
  r_anal_block_ref (dst_block);
  r_list_prepend (ret, dst_block);
  while (prev) {
   r_anal_block_ref (prev);
   r_list_prepend (ret, prev);
   prev = ht_up_find (ctx.visited, prev->addr, NULL);
  }
 }

beach:
 ht_up_free (ctx.visited);
 r_pvector_clear (&visit_a);
 r_pvector_clear (&visit_b);
 return ret;
}

R_API bool r_anal_block_was_modified(RAnalBlock *block) {
 r_return_val_if_fail (block, false);
 if (!block->anal->iob.read_at) {
  return false;
 }
 ut8 *buf = malloc (block->size);
 if (!buf) {
  return false;
 }
 if (!block->anal->iob.read_at (block->anal->iob.io, block->addr, buf, block->size)) {
  free (buf);
  return false;
 }
 ut32 cur_hash = r_hash_xxhash (buf, block->size);
 free (buf);
 return block->bbhash != cur_hash;
}

R_API void r_anal_block_update_hash(RAnalBlock *block) {
 r_return_if_fail (block);
 if (!block->anal->iob.read_at) {
  return;
 }
 ut8 *buf = malloc (block->size);
 if (!buf) {
  return;
 }
 if (!block->anal->iob.read_at (block->anal->iob.io, block->addr, buf, block->size)) {
  free (buf);
  return;
 }
 block->bbhash = r_hash_xxhash (buf, block->size);
 free (buf);
}

typedef struct {
 RAnalBlock *block;
 bool reachable;
} NoreturnSuccessor;

static void noreturn_successor_free(HtUPKv *kv) {
 NoreturnSuccessor *succ = kv->value;
 r_anal_block_unref (succ->block);
 free (succ);
}

static bool noreturn_successors_cb(RAnalBlock *block, void *user) {
 HtUP *succs = user;
 NoreturnSuccessor *succ = R_NEW0 (NoreturnSuccessor);
 if (!succ) {
  return false;
 }
 r_anal_block_ref (block);
 succ->block = block;
 succ->reachable = false;
 ht_up_insert (succs, block->addr, succ);
 return true;
}

static bool noreturn_successors_reachable_cb(RAnalBlock *block, void *user) {
 HtUP *succs = user;
 NoreturnSuccessor *succ = ht_up_find (succs, block->addr, NULL);
 if (succ) {
  succ->reachable = true;
 }
 return true;
}

static bool noreturn_remove_unreachable_cb(void *user, const ut64 k, const void *v) {
 RAnalFunction *fcn = user;
 NoreturnSuccessor *succ = (NoreturnSuccessor *)v;
 if (!succ->reachable && r_list_contains (succ->block->fcns, fcn)) {
  r_anal_function_remove_block (fcn, succ->block);
 }
 succ->reachable = false;
 return true;
}

static bool noreturn_get_blocks_cb(void *user, const ut64 k, const void *v) {
 RList *blocks = user;
 NoreturnSuccessor *succ = (NoreturnSuccessor *)v;
 r_anal_block_ref (succ->block);
 r_list_push (blocks, succ->block);
 return true;
}

R_API RAnalBlock *r_anal_block_chop_noreturn(RAnalBlock *block, ut64 addr) {
 r_return_val_if_fail (block, NULL);
 if (!r_anal_block_contains (block, addr) || addr == block->addr) {
  return block;
 }
 r_anal_block_ref (block);



 HtUP *succs = ht_up_new (NULL, noreturn_successor_free, NULL);
 if (!succs) {
  return block;
 }
 r_anal_block_recurse (block, noreturn_successors_cb, succs);


 r_anal_block_set_size (block, addr - block->addr);
 r_anal_block_update_hash (block);
 block->jump = UT64_MAX;
 block->fail = UT64_MAX;
 r_anal_switch_op_free (block->switch_op);
 block->switch_op = NULL;


 RListIter *it;
 RAnalFunction *fcn;

 RList *fcns_cpy = r_list_clone (block->fcns);
 r_list_foreach (fcns_cpy, it, fcn) {
  RAnalBlock *entry = r_anal_get_block_at (block->anal, fcn->addr);
  if (entry && r_list_contains (entry->fcns, fcn)) {
   r_anal_block_recurse (entry, noreturn_successors_reachable_cb, succs);
  }
  ht_up_foreach (succs, noreturn_remove_unreachable_cb, fcn);
 }
 r_list_free (fcns_cpy);



 RList merge_blocks;
 r_list_init (&merge_blocks);
 merge_blocks.free = (RListFree)r_anal_block_unref;
 ht_up_foreach (succs, noreturn_get_blocks_cb, &merge_blocks);



 r_anal_block_unref (block);
 ht_up_free (succs);

 ut64 block_addr = block->addr;


 r_anal_block_automerge (&merge_blocks);


 RAnalBlock *ret = NULL;
 for (it = merge_blocks.head; it && (block = it->data, 1); it = it->n) {
  if (block->addr == block_addr) {

   ret = block;
   break;
  }
 }

 r_list_purge (&merge_blocks);
 return ret;
}

typedef struct {
 HtUP *predecessors;
 HtUP *visited_blocks;
 HtUP *blocks;

 RAnalBlock *cur_pred;
 size_t cur_succ_count;
} AutomergeCtx;

static bool count_successors_cb(ut64 addr, void *user) {
 AutomergeCtx *ctx = user;
 ctx->cur_succ_count++;
 return true;
}

static bool automerge_predecessor_successor_cb(ut64 addr, void *user) {
 AutomergeCtx *ctx = user;
 ctx->cur_succ_count++;
 RAnalBlock *block = ht_up_find (ctx->blocks, addr, NULL);
 if (!block) {

  return true;
 }
 bool found;
 RAnalBlock *pred = ht_up_find (ctx->predecessors, (ut64)(size_t)block, &found);
 if (found) {
  if (pred) {

   ht_up_update (ctx->predecessors, (ut64)(size_t) block, NULL);
  }
 } else {

  ht_up_insert (ctx->predecessors, (ut64)(size_t) block, ctx->cur_pred);
 }
 return true;
}

static bool automerge_get_predecessors_cb(void *user, ut64 k) {
 AutomergeCtx *ctx = user;
 const RAnalFunction *fcn = (const RAnalFunction *)(size_t)k;
 RListIter *it;
 RAnalBlock *block;
 r_list_foreach (fcn->bbs, it, block) {
  bool already_visited;
  ht_up_find (ctx->visited_blocks, (ut64)(size_t)block, &already_visited);
  if (already_visited) {
   continue;
  }
  ctx->cur_pred = block;
  ctx->cur_succ_count = 0;
  r_anal_block_successor_addrs_foreach (block, automerge_predecessor_successor_cb, ctx);
  ht_up_insert (ctx->visited_blocks, (ut64)(size_t)block, (void *)ctx->cur_succ_count);
 }
 return true;
}



R_API void r_anal_block_automerge(RList *blocks) {
 r_return_if_fail (blocks);
 AutomergeCtx ctx = {
  .predecessors = ht_up_new0 (),
  .visited_blocks = ht_up_new0 (),
  .blocks = ht_up_new0 ()
 };

 SetU *relevant_fcns = set_u_new ();
 RList *fixup_candidates = r_list_new ();
 if (!ctx.predecessors || !ctx.visited_blocks || !ctx.blocks || !relevant_fcns || !fixup_candidates) {
  goto beach;
 }


 RListIter *it;
 RAnalBlock *block;
 r_list_foreach (blocks, it, block) {
  RListIter *fit;
  RAnalFunction *fcn;
  r_list_foreach (block->fcns, fit, fcn) {
   set_u_add (relevant_fcns, (ut64)(size_t)fcn);
  }
  ht_up_insert (ctx.blocks, block->addr, block);
 }


 set_u_foreach (relevant_fcns, automerge_get_predecessors_cb, &ctx);


 RListIter *tmp;
 r_list_foreach_safe (blocks, it, tmp, block) {
  RAnalBlock *predecessor = ht_up_find (ctx.predecessors, (ut64)(size_t)block, NULL);
  if (!predecessor) {
   continue;
  }
  size_t pred_succs_count = (size_t)ht_up_find (ctx.visited_blocks, (ut64)(size_t)predecessor, NULL);
  if (pred_succs_count != 1) {

   continue;
  }




  RListIter *bit;
  RAnalBlock *clock;
  for (bit = it->n; bit && (clock = bit->data, 1); bit = bit->n) {
   RAnalBlock *fixup_pred = ht_up_find (ctx.predecessors, (ut64)(size_t)clock, NULL);
   if (fixup_pred == block) {
    r_list_push (fixup_candidates, clock);
   }
  }

  if (r_anal_block_merge (predecessor, block)) {


   ctx.cur_succ_count = 0;
   r_anal_block_successor_addrs_foreach (predecessor, count_successors_cb, &ctx);
   ht_up_update (ctx.visited_blocks, (ut64)(size_t)predecessor, (void *)ctx.cur_succ_count);
   r_list_foreach (fixup_candidates, bit, clock) {

    ht_up_update (ctx.predecessors, (ut64)(size_t)clock, predecessor);
   }

   r_list_split_iter (blocks, it);
   free (it);
  }

  r_list_purge (fixup_candidates);
 }

beach:
 ht_up_free (ctx.predecessors);
 ht_up_free (ctx.visited_blocks);
 ht_up_free (ctx.blocks);
 set_u_free (relevant_fcns);
 r_list_free (fixup_candidates);
}
