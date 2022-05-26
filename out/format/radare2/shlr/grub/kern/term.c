# 1 "project/radare2/shlr/grub/kern/term.c"
# 19 "project/radare2/shlr/grub/kern/term.c"
#include <grub/term.h>
#include <grub/err.h>
#include <grub/mm.h>
#include <grub/misc.h>
#include <grub/env.h>
#include <grub/time.h>

GRUB_EXPORT(grub_term_inputs);
GRUB_EXPORT(grub_term_outputs);
GRUB_EXPORT(grub_term_inputs_disabled);
GRUB_EXPORT(grub_term_outputs_disabled);
GRUB_EXPORT(grub_putchar);
GRUB_EXPORT(grub_putcode);
GRUB_EXPORT(grub_putcode);
GRUB_EXPORT(grub_getkey);
GRUB_EXPORT(grub_getkeystatus);
GRUB_EXPORT(grub_checkkey);
GRUB_EXPORT(grub_cls);
GRUB_EXPORT(grub_setcolorstate);
GRUB_EXPORT(grub_refresh);
GRUB_EXPORT(grub_newline_hook);

struct grub_term_output *grub_term_outputs_disabled;
struct grub_term_input *grub_term_inputs_disabled;
struct grub_term_output *grub_term_outputs;
struct grub_term_input *grub_term_inputs;

void (*grub_newline_hook) (void) = NULL;


void
grub_putcode (grub_uint32_t code, struct grub_term_output *term)
{
  if (code == '\t' && term->getxy)
    {
      int n;

      n = 8 - ((term->getxy () >> 8) & 7);
      while (n--)
 grub_putcode (' ', term);

      return;
    }

  (term->putchar) (code);
  if (code == '\n')
    (term->putchar) ('\r');
}



void
grub_putchar (int c)
{
  static grub_size_t size = 0;
  static grub_uint8_t buf[6];
  grub_uint8_t *rest;
  grub_uint32_t code;

  buf[size++] = c;

  while (grub_utf8_to_ucs4 (&code, 1, buf, size, (const grub_uint8_t **) &rest)
  != 0)
    {
      struct grub_term_output *term;
      size -= rest - buf;
      grub_memmove (buf, rest, size);
      FOR_ACTIVE_TERM_OUTPUTS(term)
 grub_putcode (code, term);
      if (code == '\n' && grub_newline_hook)
 grub_newline_hook ();
    }
}

int
grub_getkey (void)
{
  grub_term_input_t term;

  grub_refresh ();

  while (1)
    {
      FOR_ACTIVE_TERM_INPUTS(term)
      {
 int key = term->checkkey ();
 if (key != -1)
   return term->getkey ();
      }

      grub_cpu_idle ();
    }
}

int
grub_checkkey (void)
{
  grub_term_input_t term;

  FOR_ACTIVE_TERM_INPUTS(term)
  {
    int key = term->checkkey ();
    if (key != -1)
      return key;
  }

  return -1;
}

int
grub_getkeystatus (void)
{
  int status = 0;
  grub_term_input_t term;

  FOR_ACTIVE_TERM_INPUTS(term)
  {
    if (term->getkeystatus)
      status |= term->getkeystatus ();
  }

  return status;
}

void
grub_cls (void)
{
  struct grub_term_output *term;

  FOR_ACTIVE_TERM_OUTPUTS(term)
  {
    if ((term->flags & GRUB_TERM_DUMB) || (grub_env_get ("debug")))
      {
 grub_putcode ('\n', term);
 grub_term_refresh (term);
      }
    else
      (term->cls) ();
  }
}

void
grub_setcolorstate (grub_term_color_state state)
{
  struct grub_term_output *term;

  FOR_ACTIVE_TERM_OUTPUTS(term)
    grub_term_setcolorstate (term, state);
}

void
grub_refresh (void)
{
  struct grub_term_output *term;

  FOR_ACTIVE_TERM_OUTPUTS(term)
    grub_term_refresh (term);
}
