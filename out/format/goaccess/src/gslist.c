# 1 "project/goaccess/src/gslist.c"
# 31 "project/goaccess/src/gslist.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <inttypes.h>

#include "gslist.h"
#include "gstorage.h"
#include "xmalloc.h"





GSLList *
list_create (void *data) {
  GSLList *node = xmalloc (sizeof (GSLList));
  node->data = data;
  node->next = NULL;

  return node;
}





GSLList *
list_insert_append (GSLList * node, void *data) {
  GSLList *newnode;
  newnode = list_create (data);
  newnode->next = node->next;
  node->next = newnode;

  return newnode;
}





GSLList *
list_insert_prepend (GSLList * list, void *data) {
  GSLList *newnode;
  newnode = list_create (data);
  newnode->next = list;

  return newnode;
}





GSLList *
list_find (GSLList * node, int (*func) (void *, void *), void *data) {
  while (node) {
    if (func (node->data, data) > 0)
      return node;
    node = node->next;
  }

  return NULL;
}

GSLList *
list_copy (GSLList * node) {
  GSLList *list = NULL;

  while (node) {
    if (!list)
      list = list_create (i322ptr ((*(uint32_t *) node->data)));
    else
      list = list_insert_prepend (list, i322ptr ((*(uint32_t *) node->data)));
    node = node->next;
  }

  return list;
}




int
list_remove_nodes (GSLList * list) {
  GSLList *tmp;
  while (list != NULL) {
    tmp = list->next;
    if (list->data)
      free (list->data);
    free (list);
    list = tmp;
  }

  return 0;
}





int
list_remove_node (GSLList ** list, GSLList * node) {
  GSLList **current = list, *next = NULL;
  for (; *current; current = &(*current)->next) {
    if ((*current) != node)
      continue;

    next = (*current)->next;
    if ((*current)->data)
      free ((*current)->data);
    free (*current);
    *current = next;
    return 0;
  }
  return 1;
}





int
list_foreach (GSLList * node, int (*func) (void *, void *), void *user_data) {
  while (node) {
    if (func (node->data, user_data) != 0)
      return -1;
    node = node->next;
  }

  return 0;
}




int
list_count (GSLList * node) {
  int count = 0;
  while (node != 0) {
    count++;
    node = node->next;
  }
  return count;
}
