# 1 "project/goaccess/src/gmenu.c"
# 31 "project/goaccess/src/gmenu.c"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "gmenu.h"

#include "xmalloc.h"
#include "ui.h"




GMenu *
new_gmenu (WINDOW * parent, int h, int w, int y, int x) {
  GMenu *menu = xmalloc (sizeof (GMenu));

  memset (menu, 0, sizeof *menu);
  menu->count = 0;
  menu->idx = 0;
  menu->multiple = 0;
  menu->selectable = 0;
  menu->start = 0;
  menu->status = 0;

  menu->h = h;
  menu->w = w;
  menu->x = x;
  menu->y = y;
  menu->win = derwin (parent, menu->h, menu->w, menu->y, menu->x);

  return menu;
}


static void
draw_menu_item (GMenu * menu, char *s, int x, int y, int w, int checked,
                GColors * (*func) (void)) {
  char check, *lbl = NULL;

  if (menu->selectable) {
    check = checked ? 'x' : ' ';
    lbl = xmalloc (snprintf (NULL, 0, "[%c] %s", check, s) + 1);
    sprintf (lbl, "[%c] %s", check, s);
    draw_header (menu->win, lbl, "%s", y, x, w, (*func));
    free (lbl);
  } else {
    draw_header (menu->win, s, "%s", y, x, w, (*func));
  }
}






int
post_gmenu (GMenu * menu) {
  GColors *(*func) (void);
  int i = 0, j = 0, start, end, height, total, checked = 0;

  if (menu == NULL)
    return 1;

  werase (menu->win);

  height = menu->h;
  start = menu->start;
  total = menu->size;
  end = height < total ? start + height : total;

  for (i = start; i < end; i++, j++) {
    func = i == menu->idx ? color_selected : color_default;
    checked = menu->items[i].checked ? 1 : 0;
    draw_menu_item (menu, menu->items[i].name, 0, j, menu->w, checked, func);
  }
  wrefresh (menu->win);

  return 0;
}


void
gmenu_driver (GMenu * menu, int c) {
  int i;

  switch (c) {
  case REQ_DOWN:
    if (menu->idx >= menu->size - 1)
      break;
    ++menu->idx;
    if (menu->idx >= menu->h && menu->idx >= menu->start + menu->h)
      menu->start++;
    post_gmenu (menu);
    break;
  case REQ_UP:
    if (menu->idx <= 0)
      break;
    --menu->idx;
    if (menu->idx < menu->start)
      --menu->start;
    post_gmenu (menu);
    break;
  case REQ_SEL:
    if (!menu->multiple) {
      for (i = 0; i < menu->size; i++)
        menu->items[i].checked = 0;
    }
    if (menu->items[menu->idx].checked)
      menu->items[menu->idx].checked = 0;
    else
      menu->items[menu->idx].checked = 1;
    post_gmenu (menu);
    break;
  }
}
