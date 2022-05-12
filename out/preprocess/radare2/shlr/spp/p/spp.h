# 0 "project/radare2/shlr/spp/p/spp.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/shlr/spp/p/spp.h"
# 23 "project/radare2/shlr/spp/p/spp.h"
static char *spp_var_get(char *var) {
 return r_sys_getenv (var);
}

static int spp_var_set(const char *var, const char *val) {
 return r_sys_setenv (var, val);
}
# 64 "project/radare2/shlr/spp/p/spp.h"
static TAG_CALLBACK(spp_set) {
 char *eq, *val = "";
 if (!state->echo[state->ifl]) {
  return 0;
 }
 for (eq=buf; eq[0]; eq++) {
  switch (eq[0]) {
  case '-':
  case '.':
   eq[0] = '_';
   break;
  }
 }
 eq = strchr (buf, ' ');
 if (eq) {
  *eq = '\0';
  val = eq + 1;
 }
 if (spp_var_set (buf, val) == -1) {
  fprintf (stderr, "Invalid variable name '%s' at line %d\n", buf, state->lineno);
 }
 return 0;
}

static TAG_CALLBACK(spp_get) {
 char *var;
 if (!state->echo[state->ifl]) {
  return 0;
 }
 var = spp_var_get (buf);
 if (var) {
  out_printf (out, "%s", var);
 }
 return 0;
}

static TAG_CALLBACK(spp_getrandom) {
 int max;
 if (!state->echo[state->ifl]) {
  return 0;
 }




 srandom (r_sys_getpid ());

 max = atoi (buf);
 if (max > 0) {
  max = (int)(rand () % max);
 }
 out_printf (out, "%d", max);
 return 0;
}

static TAG_CALLBACK(spp_add) {
 char res[32];
 char *var, *eq = strchr (buf, ' ');
 int ret = 0;
 if (!state->echo[state->ifl]) {
  return 0;
 }
 if (eq) {
  *eq = '\0';
  var = spp_var_get (buf);
  if (var) {
   ret = atoi (var);
  }
  ret += atoi (eq + 1);
  snprintf (res, sizeof (res), "%d", ret);
  r_sys_setenv (buf, res);
 } else {

 }
 return 0;
}

static TAG_CALLBACK(spp_sub) {
 char *eq = strchr(buf, ' ');
 char *var;
 int ret = 0;
 if (!state->echo[state->ifl]) {
  return 0;
 }
 if (eq) {
  *eq = '\0';
  var = spp_var_get (buf);
  ret = var? atoi (var): 0;
  ret -= atoi (eq + 1);
  r_sys_setenv (buf, eq + 1);
 } else {

 }
 return ret;
}

static TAG_CALLBACK(spp_trace) {
 if (state->echo[state->ifl]) {
  fprintf (stderr, "%.1000s\n", buf);
 }
 return 0;
}


static TAG_CALLBACK(spp_echo) {
 if (state->echo[state->ifl]) {
  out_printf (out, "%s", buf);
 }

 return 0;
}

static TAG_CALLBACK(spp_error) {
 if (!state->echo[state->ifl]) {
  return 0;
 }
 fprintf (stderr, "ERROR: %s (line=%d)\n", buf, state->lineno);
 return -1;
}

static TAG_CALLBACK(spp_warning) {
 if (!state->echo[state->ifl]) {
  return 0;
 }
 fprintf (stderr, "WARNING: %s (line=%d)\n", buf, state->lineno);
 return 0;
}

static TAG_CALLBACK(spp_system) {
 if (!state->echo[state->ifl]) {
  return 0;
 }





 return 0;
}

static TAG_CALLBACK(spp_include) {
 char *incdir;
 if (!state->echo[state->ifl]) {
  return 0;
 }
 incdir = getenv("SPP_INCDIR");
 if (incdir) {
  char *b = strdup (incdir);
  char *p = realloc (b, strlen (b) + strlen (buf) + 3);
  if (p) {
   b = p;
   strcat (b, "/");
   strcat (b, buf);
   spp_file (b, out);
  }
  free (b);
 } else {
  spp_file(buf, out);
 }
 return 0;
}

static TAG_CALLBACK(spp_if) {
 char *var = spp_var_get(buf);
 state->echo[state->ifl + 1] = (var && *var != '0' && *var != '\0') ? 1 : 0;
 return 1;
}


static TAG_CALLBACK(spp_ifeq) {
 char *value = buf;
 char *eq = strchr(buf, ' ');
 if (eq) {
  *eq = '\0';
  value = spp_var_get(value);
  if (value && !strcmp(value, eq+1)) {
   state->echo[state->ifl + 1] = 1;
  } else state->echo[state->ifl + 1] = 0;

 } else {
  value = spp_var_get(buf);
  if (!value || *value=='\0')
   state->echo[state->ifl + 1] = 1;
  else state->echo[state->ifl + 1] = 0;

 }
 return 1;
}

static TAG_CALLBACK(spp_hex) {
 int i;
 for(i = 0; buf[i]; i++) {
  if (buf[i] >= '0' && buf[i] <= '9') {
   int b;
   unsigned int ch;
   b = buf[i + 2];
   buf[i + 2] = '\0';
   sscanf(buf + i, "%02x", &ch);
   out_printf (out, "%c", ch);
   buf[i + 2] = b;
   buf = buf + 2;
  }
 }
 return 0;
}

static TAG_CALLBACK(spp_grepline) {
 FILE *fd;
 char b[1024];
 char *ptr;
 int line;

 if (!state->echo[state->ifl]) return 1;
 ptr = strchr(buf, ' ');
 if (ptr) {
  *ptr= '\0';
  fd = fopen (buf, "r");
  line = atoi (ptr+1);
  if (fd) {
   while (!feof (fd) && line--) {
    if (!fgets (b, 1023, fd)) {
     break;
    }
   }
   fclose (fd);
   out_printf (out, "%s", b);
  } else {
   fprintf(stderr, "Unable to open '%s'\n", buf);
  }
 }
 return 0;
}

static TAG_CALLBACK(spp_else) {
 state->echo[state->ifl] = state->echo[state->ifl] ? 0 : 1;
 return 0;
}

static TAG_CALLBACK(spp_ifnot) {
 spp_if (state, out, buf);
 spp_else (state, out, buf);
 return 1;
}

static TAG_CALLBACK(spp_ifin) {
 char *var, *ptr;
 if (!state->echo[state->ifl]) {
  return 1;
 }
 ptr = strchr (buf, ' ');
 state->echo[state->ifl + 1] = 0;
 if (ptr) {
  *ptr='\0';
  var = getenv(buf);
  if (strstr (ptr + 1, var)) {
   state->echo[state->ifl + 1] = 1;
  }
 }
 return 1;
}

static TAG_CALLBACK(spp_endif) {
 return -1;
}

static TAG_CALLBACK(spp_default) {
 if (!state->echo[state->ifl]) {
  return 0;
 }
 if (buf[-1] != ';') {
  fprintf (stderr, "WARNING: invalid command: '%s' at line %d\n", buf, state->lineno);
 }
 return 0;
}





static TAG_CALLBACK(spp_pipe) {



 return 0;
}

static char *spp_switch_str = NULL;

static TAG_CALLBACK(spp_switch) {
 char *var = spp_var_get (buf);
 if (var) {
  spp_switch_str = strdup (var);
 } else {
  spp_switch_str = strdup ("");
 }
 return 1;
}

static TAG_CALLBACK(spp_case) {
 state->echo[state->ifl] = strcmp (buf, spp_switch_str)?0:1;
 return 0;
}

static TAG_CALLBACK(spp_endswitch) {
 free (spp_switch_str);
 spp_switch_str = NULL;
 return -1;
}

static TAG_CALLBACK(spp_endpipe) {
# 401 "project/radare2/shlr/spp/p/spp.h"
 return 0;
}

static PUT_CALLBACK(spp_fputs) {





 {
  out_printf (out, "%s", buf);
 }
 return 0;
}

static struct Tag spp_tags[] = {
 { "get", spp_get },
 { "hex", spp_hex },
 { "getrandom", spp_getrandom },
 { "grepline", spp_grepline },
 { "set", spp_set },
 { "add", spp_add },
 { "sub", spp_sub },
 { "switch", spp_switch },
 { "case", spp_case },
 { "endswitch", spp_endswitch },
 { "echo", spp_echo },
 { "error", spp_error },
 { "warning", spp_warning },
 { "trace", spp_trace },
 { "ifin", spp_ifin },
 { "ifnot", spp_ifnot },
 { "ifeq", spp_ifeq },
 { "if", spp_if },
 { "else", spp_else },
 { "endif", spp_endif },
 { "pipe", spp_pipe },
 { "endpipe", spp_endpipe },
 { "include", spp_include },
 { "system", spp_system },
 { NULL, spp_default },
 { NULL }
};

static ARG_CALLBACK(spp_arg_i) {
 r_sys_setenv ("SPP_INCDIR", arg);
 return 0;
}

static ARG_CALLBACK(spp_arg_d) {

 char *eq = strchr (arg, '=');
 if (eq) {
  *eq = '\0';
  spp_var_set (arg, eq+1);
 } else {
  spp_var_set (arg, "");
 }
 return 0;
}

static struct Arg spp_args[] = {
 { "-I", "add include directory", 1, spp_arg_i },
 { "-D", "define value of variable", 1, spp_arg_d },
 { NULL }
};

DLL_LOCAL struct Proc spp_proc = {
 .name = "spp",
 .tags = (struct Tag **)spp_tags,
 .args = (struct Arg **)spp_args,
 .token = " ",
 .eof = NULL,
 .tag_pre = "<{",
 .tag_post = "}>",
 .chop = 1,
 .fputs = spp_fputs,
 .multiline = NULL,
 .default_echo = 1,
 .tag_begin = 0,
};
