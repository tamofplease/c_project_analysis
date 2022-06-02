# 1 "project/radare2/libr/cons/grep.c"


#include <r_cons.h>
#include <r_util/r_print.h>
#include <sdb.h>

#define I(x) r_cons_singleton ()->x

static char *strchr_ns(char *s, const char ch) {
 char *p = strchr (s, ch);
 if (p && p > s) {
  char *prev = p - 1;
  if (*prev == '\\') {
   memmove (prev, p, strlen (p) + 1);
   return strchr_ns (p, ch);
  }
 }
 return p;
}

static const char *help_detail_tilde[] = {
 "Usage: [command]~[modifier][word,word][endmodifier][[column]][:line]\n"
 "modifier:", "", "",
 " &", "", "all words must match to grep the line",
 " $[n]", "", "sort numerically / alphabetically the Nth column",
 " $!", "", "sort in inverse order",
 " ,", "", "token to define another keyword",
 " +", "", "case insensitive grep (grep -i)",
 " ^", "", "words must be placed at the beginning of line",
 " <", "", "perform zoom operation on the buffer",
 " !", "", "negate grep",
 " ?", "", "count number of matching lines",
 " ?.", "", "count number chars",
 " ??", "", "show this help message",
 " ?ea", "", "convert text into seven segment style ascii art",
 " :s..e", "", "show lines s-e",
 " ..", "", "internal 'less'",
 " ...", "", "internal 'hud' (like V_)",
 " ....", "", "internal 'hud' in one line",
 " {:", "", "human friendly indentation (yes, it's a smiley)",
 " {:..", "", "less the output of {:",
 " {:...", "", "hud the output of {:",
 " {}", "", "json indentation",
 " {}..", "", "less json indentation",
 " {}...", "", "hud json indentation",
 " {path}", "", "json path grep",
 "endmodifier:", "", "",
 " $", "", "words must be placed at the end of line",
 "column:", "", "",
 " [n]", "", "show only column n",
 " [n-m]", "", "show column n to m",
 " [n-]", "", "show all columns starting from column n",
 " [i,j,k]", "", "show the columns i, j and k",
 "Examples:", "", "",
 " i~:0", "", "show first line of 'i' output",
 " i~:-2", "", "show the second to last line of 'i' output",
 " i~:0..3", "", "show first three lines of 'i' output",
 " pd~mov", "", "disasm and grep for mov",
 " pi~[0]", "", "show only opcode",
 " i~0x400$", "", "show lines ending with 0x400",
 NULL
};

R_API void r_cons_grep_help(void) {
 r_cons_cmd_help (help_detail_tilde, true);
}

#define R_CONS_GREP_BUFSIZE 4096

static void parse_grep_expression(const char *str) {
 static char buf[R_CONS_GREP_BUFSIZE], *ptrs[R_CONS_GREP_COUNT];
 int wlen, len, is_range, num_is_parsed, fail = false;
 char *ptr, *optr, *ptr2, *ptr3, *end_ptr = NULL, last;
 ut64 range_begin, range_end;
 size_t ptrs_length;

 if (R_STR_ISEMPTY (str)) {
  return;
 }
 RCons *cons = r_cons_singleton ();
 RConsContext *ctx = cons->context;
 RConsGrep *grep = &ctx->grep;

 len = strlen (str) - 1;
 if (len < 0) {
  len = 0;
 }
 if (len > R_CONS_GREP_BUFSIZE - 1) {
  eprintf ("r_cons_grep: too long!\n");
  return;
 }
 if (len > 0 && str[len] == '?') {
  grep->counter = 1;
  r_str_ncpy (buf, str, R_MIN (len, sizeof (buf) - 1));
  buf[len] = 0;
  len--;
 } else {
  r_str_ncpy (buf, str, sizeof (buf) - 1);
 }

 ptr = buf;
 ptrs_length = 1;
 ptrs[0] = ptr;

 while ((ptrs[ptrs_length] = (strchr (ptr, '~')))) {
  *(ptrs[ptrs_length]) = '\0';
  ptrs[ptrs_length]++;
  ptr = ptrs[ptrs_length];
  ptrs_length++;
  if (ptrs_length >= R_CONS_GREP_COUNT) {
   eprintf ("to many nested greps\n");
   return;
  }
 }

 free (grep->str);
 grep->str = NULL;
 bool first = true;
 ctx->sorted_column = 0;
 size_t i;
 for (i = 0; i < ptrs_length; i++) {
  ptr = ptrs[i];
  end_ptr = ptr2 = ptr3 = NULL;
  while (*ptr) {
   switch (*ptr) {
   case '.':
    if (ptr[1] == '.') {
     if (ptr[2] == '.') {
      if (ptr[3] == '.') {
       grep->less = 3;
      } else {
       grep->less = 2;
      }
     } else {
      grep->less = 1;
     }
     return;
    }
    ptr++;
    break;
   case '{':
    if (ptr[1] == ':') {
     grep->human = true;
     grep->json = 1;
     if (!strncmp (ptr, "{:...", 5)) {
      grep->hud = true;
     } else if (!strncmp (ptr, "{:..", 4)) {
      grep->less = 1;
     }
    } else if (ptr[1] == '}') {

     grep->json = 1;
     if (!strncmp (ptr, "{}...", 5)) {
      grep->hud = true;
     } else if (!strncmp (ptr, "{}..", 4)) {
      grep->less = 1;
     }
    } else {
     char *jsonPath = strdup (ptr + 1);
     char *jsonPathEnd = strchr (jsonPath, '}');
     if (jsonPathEnd) {
      *jsonPathEnd = 0;
      free (grep->json_path);
      grep->json_path = jsonPath;
      grep->json = 1;
     } else {
      free (jsonPath);
     }
     return;
    }
    ptr++;
    break;
   case '$':
    ptr++;
    if (*ptr == '!') {
     grep->sort_invert = true;
     ptr++;
    } else {
     grep->sort_invert = false;
    }
    grep->sort = atoi (ptr);
    while (IS_DIGIT (*ptr)) {
     ptr++;
    }
    if (*ptr == ':') {
     grep->sort_row = atoi (++ptr);
     ptr++;
    }
    break;
   case '&':
    ptr++;
    grep->amp = 1;
    break;
   case '<':
    grep->zoom = atoi (++ptr);

    break;
   case '+':
    if (first) {
     ptr++;
     grep->icase = true;
    } else {
     goto while_end;
    }
    break;
   case '^':
    ptr++;
    grep->begin = true;
    break;
   case '!':
    ptr++;
    grep->neg = true;
    break;
   case '?':
    ptr++;
    grep->counter = 1;
    if (*ptr == '.') {
     grep->charCounter = true;
     ptr++;
    } else if (!strcmp (ptr, "ea")) {

     grep->ascart = true;
    } else if (*ptr == '?') {
     cons->context->filter = true;
     r_cons_grep_help ();
     return;
    }
    break;
   default:
    goto while_end;
   }
   first = false;
  }
 while_end:
  ptr2 = strchr (ptr, '[');
  ptr3 = strchr (ptr, ']');
  is_range = 0;
  num_is_parsed = 0;
  fail = false;
  range_begin = range_end = -1;

  if (ptr2 && ptr3) {
   end_ptr = ptr2;
   last = ptr3[1];
   ptr3[1] = '\0';
   ptr2++;
   for (; ptr2 <= ptr3; ptr2++) {
    if (fail) {
     ZERO_FILL (grep->tokens);
     grep->tokens_used = 0;
     break;
    }
    switch (*ptr2) {
    case '-':
     is_range = 1;
     num_is_parsed = 0;
     range_end = -1;
     break;
    case ']':
    case ',':
     for (; range_begin <= range_end; range_begin++) {
      if (range_begin >= R_CONS_GREP_TOKENS) {
       fail = true;
       break;
      }
      grep->tokens[range_begin] = 1;
      grep->tokens_used = 1;
     }

     if (*ptr2 == ']' && is_range && !num_is_parsed) {
      num_is_parsed = true;
      range_end = -1;
     } else {
      is_range = 0;
      num_is_parsed = 0;
     }
     break;
    default:
     if (!num_is_parsed) {
      if (is_range) {
       range_end = r_num_get (cons->num, ptr2);

       if (range_end == 0 && *ptr != '0') {
        range_end = -1;
       }
      } else {
       range_begin = range_end = r_num_get (cons->num, ptr2);
      }
      num_is_parsed = true;
     }
    }
   }
   ptr3[1] = last;
  }

  ptr2 = strchr_ns (ptr, ':');
  grep->range_line = 2;
  if (ptr2 && ptr2[1] != ':' && ptr2[1] && (IS_DIGIT (ptr2[1]) || ptr2[1] == '-' || ptr2[1] == '.')) {
   end_ptr = end_ptr? R_MIN (end_ptr, ptr2): ptr2;
   char *p, *token = ptr2 + 1;
   p = strstr (token, "..");
   if (!p) {
    grep->line = r_num_get (cons->num, ptr2 + 1);
    grep->range_line = 0;
   } else {
    *p = '\0';
    grep->range_line = 1;
    if (*token) {
     grep->f_line = r_num_get (cons->num, token);
    } else {
     grep->f_line = 0;
    }
    if (p[2]) {
     grep->l_line = r_num_get (cons->num, p + 2);
    } else {
     grep->l_line = 0;
    }
   }
  }
  if (end_ptr) {
   *end_ptr = '\0';
  }

  len = strlen (ptr) - 1;
  if (len > 1 && ptr[len] == '$' && ptr[len - 1] != '\\') {
   grep->end = 1;
   ptr[len] = '\0';
  }

  if (*ptr) {
   if (!grep->str) {
    grep->str = (char *)strdup (ptr);
   } else {
    grep->str = r_str_append (grep->str, ",");
    grep->str = r_str_append (grep->str, ptr);
   }

   do {
    optr = ptr;
    ptr = strchr (ptr, ',');
    if (ptr) {
     *ptr++ = '\0';
    }
    wlen = strlen (optr);
    if (!wlen) {
     continue;
    }
    if (wlen >= R_CONS_GREP_WORD_SIZE - 1) {
     eprintf ("grep string too long\n");
     continue;
    }
    grep->nstrings++;
    if (grep->nstrings > R_CONS_GREP_WORDS - 1) {
     eprintf ("too many grep strings\n");
     break;
    }
    r_str_ncpy (grep->strings[grep->nstrings - 1],
     optr, R_CONS_GREP_WORD_SIZE);
   } while (ptr);
  }
 }
 if (!grep->str) {
  grep->str = strdup ("");
  grep->nstrings++;
  grep->strings[0][0] = 0;
 }
}



static char *find_next_intgrep(char *cmd, const char *quotes) {
 char *p;
 do {
  p = (char *)r_str_firstbut (cmd, '~', quotes);
  if (!p) {
   break;
  }
  if (p == cmd || *(p - 1) != '\\') {
   return (char *)p;
  }

  r_str_cpy (p - 1, p);
  cmd = p + 1;
 } while (*cmd);
 return NULL;
}





static char *preprocess_filter_expr(char *cmd, const char *quotes) {
 char *p1, *p2, *ns = NULL;
 const char *strsep = "&";
 int len;
 int i;

 p1 = find_next_intgrep (cmd, quotes);
 if (!p1) {
  return NULL;
 }

 len = strlen (p1);
 if (len > 4 && r_str_endswith (p1, "~?") && p1[len - 3] != '\\') {
  p1[len - 2] = '\0';
  ns = r_str_append (ns, "?");
 }

 *p1 = '\0';

 i = 0;

 while ((p2 = find_next_intgrep (p1 + 1, quotes))) {
  ns = r_str_append (ns, strsep);
  ns = r_str_appendlen (ns, p1 + 1, (int)(p2 - p1 - 1));
  p1 = p2;
  strsep = "~";
  i++;
 }

 if (i > 0) {
  ns = r_str_append (ns, "~");
 }

 ns = r_str_append (ns, p1 + 1);

 return ns;
}

R_API void r_cons_grep_parsecmd(char *cmd, const char *quotestr) {
 r_return_if_fail (cmd && quotestr);
 char *ptr = preprocess_filter_expr (cmd, quotestr);
 if (ptr) {
  r_str_trim (cmd);
  parse_grep_expression (ptr);
  free (ptr);
 }
}

R_API char *r_cons_grep_strip(char *cmd, const char *quotestr) {
 char *ptr = NULL;

 if (cmd) {
  ptr = preprocess_filter_expr (cmd, quotestr);
  r_str_trim (cmd);
 }
 return ptr;
}

R_API void r_cons_grep_process(char *grep) {
 if (grep) {
  parse_grep_expression (grep);
  free (grep);
 }
}

static int cmp(const void *a, const void *b) {
 char *da = NULL;
 char *db = NULL;
 const char *ca = r_str_trim_head_ro (a);
 const char *cb = r_str_trim_head_ro (b);
 if (!a || !b) {
  return (int) (size_t) ((char *) a - (char *) b);
 }
 RConsContext *ctx = r_cons_context ();
 if (ctx->sorted_column > 0) {
  da = strdup (ca);
  db = strdup (cb);
  int colsa = r_str_word_set0 (da);
  int colsb = r_str_word_set0 (db);
  ca = (colsa > ctx->sorted_column)? r_str_word_get0 (da, ctx->sorted_column): "";
  cb = (colsb > ctx->sorted_column)? r_str_word_get0 (db, ctx->sorted_column): "";
 }
 if (IS_DIGIT (*ca) && IS_DIGIT (*cb)) {
  ut64 na = r_num_get (NULL, ca);
  ut64 nb = r_num_get (NULL, cb);
  int ret = (na > nb) - (na < nb);
  free (da);
  free (db);
  return ret;
 }
 if (da && db) {
  int ret = strcmp (ca, cb);
  free (da);
  free (db);
  return ret;
 }
 free (da);
 free (db);
 return strcmp (a, b);
}

R_API void r_cons_grepbuf(void) {
 RCons *cons = r_cons_singleton ();
 const char *buf = cons->context->buffer;
 const int len = cons->context->buffer_len;
 RConsGrep *grep = &cons->context->grep;
 const char *in = buf;
 int ret, total_lines = 0, buffer_len = 0, l = 0, tl = 0;
 bool show = false;
 if (cons->context->filter) {
  cons->context->buffer_len = 0;
  R_FREE (cons->context->buffer);
  return;
 }

 if ((!len || !buf || !*buf) && (grep->json || grep->less)) {
  grep->json = 0;
  grep->less = 0;
  grep->hud = 0;
  return;
 }
 if (grep->ascart) {
  char *buf = strdup (cons->context->buffer);
  r_str_ansi_filter (buf, NULL, NULL, -1);
  char *out = r_str_ss (buf, NULL, 0);
  free (cons->context->buffer);
  free (buf);
  cons->context->buffer = out;
  cons->context->buffer_len = strlen (out);
  cons->context->buffer_sz = cons->context->buffer_len;
  return;
 }
 if (grep->zoom) {
  char *in = calloc (cons->context->buffer_len + 2, 4);
  strcpy (in, cons->context->buffer);
  char *out = r_str_scale (in, grep->zoom * 2, grep->zoomy?grep->zoomy:grep->zoom);
  if (out) {
   free (cons->context->buffer);
   cons->context->buffer = out;
   cons->context->buffer_len = strlen (out);
   cons->context->buffer_sz = cons->context->buffer_len;
  }
  grep->zoom = 0;
  grep->zoomy = 0;
  free (in);
  return;
 }
 if (grep->json) {
  if (grep->json_path) {
   char *u = sdb_json_get_str (cons->context->buffer, grep->json_path);
   if (u) {
    cons->context->buffer = u;
    cons->context->buffer_len = strlen (u);
    cons->context->buffer_sz = cons->context->buffer_len + 1;
    grep->json = 0;
    r_cons_newline ();
   }
   R_FREE (grep->json_path);
  } else {
   const char *palette[] = {
    cons->context->pal.graph_false,
    cons->context->pal.graph_true,
    cons->context->pal.num,
    cons->context->pal.comment,
    Color_RESET,
    NULL
   };
   char *bb = strdup (buf);
   r_str_ansi_filter (bb, NULL, NULL, -1);
   char *out = (cons->context->grep.human)
    ? r_print_json_human (bb)
    : r_print_json_indent (bb, I (context->color_mode), "  ", palette);
   free (bb);
   if (!out) {
    return;
   }
   free (cons->context->buffer);
   cons->context->buffer = out;
   cons->context->buffer_len = strlen (out);
   cons->context->buffer_sz = cons->context->buffer_len + 1;
   grep->json = 0;
   if (grep->hud) {
    grep->hud = false;
    r_cons_hud_string (cons->context->buffer);
   } else if (grep->less) {
    grep->less = 0;
    r_cons_less_str (cons->context->buffer, NULL);
   }
  }
  return;

 }
 if (grep->less) {
  int less = grep->less;
  grep->less = 0;
  if (less == 3) {
   char *res = r_cons_hud_line_string (buf);
   if (res) {
    r_cons_println (res);
    free (res);
   }
  } else if (less == 2) {
   char *res = r_cons_hud_string (buf);
   if (res) {
    r_cons_println (res);
    free (res);
   }
  } else {
   r_cons_less_str (buf, NULL);
   cons->context->buffer_len = 0;
   if (cons->context->buffer) {
    cons->context->buffer[0] = 0;
   }
   R_FREE (cons->context->buffer);
  }
  return;
 }
 if (!cons->context->buffer) {
  cons->context->buffer_len = len + 20;
  cons->context->buffer = malloc (cons->context->buffer_len);
  if (!cons->context->buffer) {
   cons->context->buffer_len = 0;
   return;
  }
  cons->context->buffer[0] = 0;
 }
 RStrBuf *ob = r_strbuf_new ("");

 cons->lines = 0;

 while ((int) (size_t) (in - buf) < len) {
  char *p = strchr (in, '\n');
  if (!p) {
   break;
  }
  l = p - in;
  if (l > 0) {
   in += l + 1;
  } else {
   in++;
  }
  total_lines++;
 }
 if (!grep->range_line && grep->line < 0) {
  grep->line = total_lines + grep->line;
 }
 if (grep->range_line == 1) {
  if (grep->f_line < 0) {
   grep->f_line = total_lines + grep->f_line;
  }
  if (grep->l_line <= 0) {
   grep->l_line = total_lines + grep->l_line;
  }
 }
 bool is_range_line_grep_only = grep->range_line != 2 && grep->str && *grep->str == '\0';
 in = buf;
 while ((int) (size_t) (in - buf) < len) {
  char *p = strchr (in, '\n');
  if (!p) {
   break;
  }
  l = p - in;
  if ((!l && is_range_line_grep_only) || l > 0) {
   char *tline = r_str_ndup (in, l);
   if (cons->context->grep_color) {
    tl = l;
   } else {
    tl = r_str_ansi_filter (tline, NULL, NULL, l);
   }
   if (tl < 0) {
    ret = -1;
   } else {
    ret = r_cons_grep_line (tline, tl);
    if (!grep->range_line) {
     if (grep->line == cons->lines) {
      show = true;
     }
    } else if (grep->range_line == 1) {
     if (grep->f_line == cons->lines) {
      show = true;
     }
     if (grep->l_line == cons->lines) {
      show = false;
     }
    } else {
     show = true;
    }
   }
   if ((!ret && is_range_line_grep_only) || ret > 0) {
    if (show) {
     char *str = r_str_ndup (tline, ret);
     if (cons->context->grep_highlight) {
      int i;
      for (i = 0; i < grep->nstrings; i++) {
       char *newstr = r_str_newf (Color_INVERT"%s"Color_RESET, grep->strings[i]);
       if (str && newstr) {
        if (grep->icase) {
         str = r_str_replace_icase (str, grep->strings[i], newstr, 1, 1);
        } else {
         str = r_str_replace (str, grep->strings[i], newstr, 1);
        }
       }
       free (newstr);
      }
     }
     if (str) {
      r_strbuf_append (ob, str);
      r_strbuf_append (ob, "\n");
     }
     buffer_len += ret + 1;
     free (str);
    }
    if (!grep->range_line) {
     show = false;
    }
    cons->lines++;
   } else if (ret < 0) {
    free (tline);
    r_strbuf_free (ob);
    return;
   }
   free (tline);
   in += l + 1;
  } else {
   in++;
  }
 }

 cons->context->buffer_len = r_strbuf_length (ob);
 if (grep->counter) {
  int cnt = grep->charCounter? strlen (cons->context->buffer): cons->lines;
  if (cons->context->buffer_len < 10) {
   cons->context->buffer_len = 10;
  }
  snprintf (cons->context->buffer, cons->context->buffer_len, "%d\n", cnt);
  cons->context->buffer_len = strlen (cons->context->buffer);
  cons->num->value = cons->lines;
  r_strbuf_free (ob);
  return;
 }

 const int ob_len = r_strbuf_length (ob);
 if (ob_len >= cons->context->buffer_sz) {
  cons->context->buffer_sz = ob_len + 1;
  cons->context->buffer = r_strbuf_drain (ob);
 } else {
  memcpy (cons->context->buffer, r_strbuf_getbin (ob, NULL), ob_len);
  cons->context->buffer[ob_len] = 0;
  r_strbuf_free (ob);
 }
 cons->context->buffer_len = ob_len;

 if (grep->sort != -1) {
#define INSERT_LINES(list) \
  do {\
   r_list_foreach (list, iter, str) {\
    int len = strlen (str);\
    memcpy (ptr, str, len);\
    memcpy (ptr + len, "\n", 2);\
    ptr += len + 1;\
    nl++;\
   }\
  }\
  while (false)

  RListIter *iter;
  int nl = 0;
  char *ptr = cons->context->buffer;
  char *str;
  RConsContext *ctx = cons->context;
  ctx->sorted_column = grep->sort;

  r_list_sort (ctx->sorted_lines, cmp);
  if (grep->sort_invert) {
   r_list_reverse (ctx->sorted_lines);
  }
  INSERT_LINES (ctx->unsorted_lines);
  INSERT_LINES (ctx->sorted_lines);
  cons->lines = nl;
  r_list_free (ctx->sorted_lines);
  ctx->sorted_lines = NULL;
  r_list_free (ctx->unsorted_lines);
  ctx->unsorted_lines = NULL;
 }
}

R_API int r_cons_grep_line(char *buf, int len) {
 r_return_val_if_fail (buf && len >= 0, 0);
 RCons *cons = r_cons_singleton ();
 RConsGrep *grep = &cons->context->grep;
 const char *delims = " |,;=\t";
 char *tok = NULL;
 bool hit = grep->neg;
 int outlen = 0;
 bool use_tok = false;
 size_t i;

 char *in = calloc (1, len + 1);
 if (!in) {
  return 0;
 }
 char *out = calloc (1, len + 2);
 if (!out) {
  free (in);
  return 0;
 }
 memcpy (in, buf, len);

 if (grep->nstrings > 0) {
  int ampfail = grep->amp;
  if (grep->icase) {
   r_str_case (in, false);
  }
  for (i = 0; i < grep->nstrings; i++) {
   char *str = grep->strings[i];
   if (grep->icase) {
    r_str_case (str, false);
   }
   const char *p = r_strstr_ansi (in, grep->strings[i]);
   if (!p) {
    ampfail = 0;
    continue;
   }
   hit = grep->begin
    ? grep->neg
     ? p != in
     : p == in
    : !grep->neg;


   if (grep->end && (strlen (grep->strings[i]) != strlen (p))) {
    hit = 0;
   }
   if (!grep->amp) {
    break;
   }
  }
  if (grep->amp) {
   hit = ampfail;
  }
 } else {
  hit = 1;
 }

 RConsContext *ctx = r_cons_context ();
 if (hit) {
  if (!grep->range_line) {
   if (grep->line == cons->lines) {
    use_tok = true;
   }
  } else if (grep->range_line == 1) {
   use_tok = R_BETWEEN (grep->f_line, cons->lines, grep->l_line);
  } else {
   use_tok = true;
  }
  if (use_tok && grep->tokens_used) {
   for (i = 0; i < R_CONS_GREP_TOKENS; i++) {
    tok = strtok (i? NULL: in, delims);
    if (tok) {
     if (grep->tokens[i]) {
      int toklen = strlen (tok);
      memcpy (out + outlen, tok, toklen);
      memcpy (out + outlen + toklen, " ", 2);
      outlen += toklen + 1;
      if (!(*out)) {
       free (in);
       free (out);
       return -1;
      }
     }
    } else {
     if ((*out)) {
      break;
     }
     free (in);
     free (out);
     return 0;
    }
   }
   outlen = outlen > 0? outlen - 1: 0;
   if (outlen > len) {
    eprintf ("r_cons_grep_line: wtf, how you reach this?\n");
    free (in);
    free (out);
    return -1;
   }
   memcpy (buf, out, len);
   len = outlen;
  }
 } else {
  len = 0;
 }
 free (in);
 free (out);
 if (grep->sort != -1) {
  char ch = buf[len];
  buf[len] = 0;
  if (!ctx->sorted_lines) {
   ctx->sorted_lines = r_list_newf (free);
  }
  if (!ctx->unsorted_lines) {
   ctx->unsorted_lines = r_list_newf (free);
  }
  if (cons->lines >= grep->sort_row) {
   r_list_append (ctx->sorted_lines, strdup (buf));
  } else {
   r_list_append (ctx->unsorted_lines, strdup (buf));
  }
  buf[len] = ch;
 }

 return len;
}

R_API void r_cons_grep(const char *grep) {
 r_return_if_fail (grep);
 parse_grep_expression (grep);
 r_cons_grepbuf ();
}