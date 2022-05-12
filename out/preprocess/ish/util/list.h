# 0 "project/ish/util/list.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/ish/util/list.h"



# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdbool.h" 1 3 4
# 5 "project/ish/util/list.h" 2
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4

# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 209 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 321 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef int wchar_t;
# 415 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
} max_align_t;
# 6 "project/ish/util/list.h" 2


# 7 "project/ish/util/list.h"
struct list {
    struct list *next, *prev;
};



static inline void list_init(struct list *list) {
    list->next = list;
    list->prev = list;
}



static inline 
# 20 "project/ish/util/list.h" 3 4
             _Bool 
# 20 "project/ish/util/list.h"
                  list_null(struct list *list) {
    return list->next == 
# 21 "project/ish/util/list.h" 3 4
                        ((void *)0) 
# 21 "project/ish/util/list.h"
                             && list->prev == 
# 21 "project/ish/util/list.h" 3 4
                                              ((void *)0)
# 21 "project/ish/util/list.h"
                                                  ;
}

static inline 
# 24 "project/ish/util/list.h" 3 4
             _Bool 
# 24 "project/ish/util/list.h"
                  list_empty(struct list *list) {
    return list->next == list || list_null(list);
}

static inline void _list_add_between(struct list *prev, struct list *next, struct list *item) {
    prev->next = item;
    item->prev = prev;
    item->next = next;
    next->prev = item;
}

static inline void list_add_tail(struct list *list, struct list *item) {
    _list_add_between(list->prev, list, item);
}

static inline void list_add(struct list *list, struct list *item) {
    _list_add_between(list, list->next, item);
}

static inline void list_add_before(struct list *before, struct list *item) {
    list_add_tail(before, item);
}
static inline void list_add_after(struct list *after, struct list *item) {
    list_add(after, item);
}

static inline void list_init_add(struct list *list, struct list *item) {
    if (list_null(list))
        list_init(list);
    list_add(list, item);
}

static inline void list_remove(struct list *item) {
    item->prev->next = item->next;
    item->next->prev = item->prev;
    item->next = item->prev = 
# 59 "project/ish/util/list.h" 3 4
                             ((void *)0)
# 59 "project/ish/util/list.h"
                                 ;
}

static inline void list_remove_safe(struct list *item) {
    if (!list_null(item))
        list_remove(item);
}
# 90 "project/ish/util/list.h"
static inline unsigned long list_size(struct list *list) {
    unsigned long count = 0;
    struct list *item;
    for (item = (list)->next; item != (list); item = item->next) {
        count++;
    }
    return count;
}
