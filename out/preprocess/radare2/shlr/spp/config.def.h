# 0 "project/radare2/shlr/spp/config.def.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/shlr/spp/config.def.h"
# 16 "project/radare2/shlr/spp/config.def.h"
# 1 "project/radare2/shlr/spp/p/sh.h" 1
# 10 "project/radare2/shlr/spp/p/sh.h"
static TAG_CALLBACK(sh_default) {
# 28 "project/radare2/shlr/spp/p/sh.h"
 int r = system (buf);
 if (errno) {
  printf ("system '%s' (%d) failed: %s\n", buf, r, strerror (errno));
 }

 return 0;
}

static int sh_pipe_enabled = 0;
static char *sh_pipe_cmd = NULL;

static TAG_CALLBACK(sh_pipe) {
 sh_pipe_enabled = 1;
 free (sh_pipe_cmd);
 sh_pipe_cmd = strdup (buf);
 return 0;
}

static TAG_CALLBACK(sh_endpipe) {
 sh_pipe_enabled = 0;
 free (sh_pipe_cmd);
 sh_pipe_cmd = NULL;
 return 0;
}

static PUT_CALLBACK(sh_fputs) {
 if (sh_pipe_enabled) {
  char str[1024];
  sprintf (str, "echo '%s' | %s", buf, sh_pipe_cmd);

  int r = system (str);
  if (errno) {
   printf ("system '%s' (%d) failed: %s\n", str, r, strerror (errno));
  }

 } else {
  out_printf (out, "%s", buf);
 }
 return 0;
}

static struct Tag sh_tags[] = {
 { "pipe", sh_pipe },
 { "endpipe", sh_endpipe },
 { NULL, sh_default },
 { NULL }
};

static struct Arg sh_args[] = {
 { NULL }
};

DLL_LOCAL struct Proc sh_proc = {
 .name = "sh",
 .tags = (struct Tag **)sh_tags,
 .args = (struct Arg **)sh_args,
 .eof = NULL,
 .token = NULL,
 .tag_pre = "{{",
 .tag_post = "}}",
 .fputs = sh_fputs,
 .multiline = "\\\n",
 .default_echo = 1,
 .chop = 0,
 .tag_begin = 0,
};
# 17 "project/radare2/shlr/spp/config.def.h" 2


# 1 "project/radare2/shlr/spp/p/spp.h" 1
# 23 "project/radare2/shlr/spp/p/spp.h"
static char *spp_var_get(char *var) {
 return r_sys_getenv (var);
}

static int spp_var_set(const char *var, const char *val) {
 return r_sys_setenv (var, val);
}



static char *cmd_to_str(const char *cmd) {
 char *out = (char *)calloc (4096, 1);
 char *tout;
 int ret = 0, len = 0, outlen = 4096;
 FILE *fd = popen (cmd, "r");
 while (fd) {
  len += ret;
  ret = fread (out + len, 1, 1023, fd);
  if (ret < 1) {
   pclose (fd);
   fd = NULL;
  }
  if (ret + 1024 > outlen) {
   outlen += 4096;
   tout = realloc (out, outlen);
   if (!tout) {
    if (fd) {
     pclose (fd);
     fd = NULL;
    }
    fprintf (stderr, "Out of memory.\n");
    break;
   }
   out = tout;
  }
 }
 out[len] = '\0';
 return out;
}


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

 char *str = cmd_to_str (buf);
 out_printf (out, "%s", str);
 free (str);

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


static FILE *spp_pipe_fd = NULL;


static TAG_CALLBACK(spp_pipe) {

 spp_pipe_fd = popen (buf, "w");

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


 int ret = 0, len = 0;
 int outlen = 4096;
 char *str = (char *)malloc (4096);
 char *tstr;
 do {
  len += ret;
  ret = fread (str + len, 1, 1023, spp_pipe_fd);
  if (ret + 1024 > outlen) {
   outlen += 4096;
   tstr = realloc (str, outlen);
   if (!tstr) {
    fprintf (stderr, "Out of memory.\n");
    break;
   }
   str = tstr;
  }
 } while (ret > 0);
 str[len] = '\0';
 out_printf (out, "%s", str);
 if (spp_pipe_fd) {
  pclose (spp_pipe_fd);
 }
 spp_pipe_fd = NULL;
 free (str);

 return 0;
}

static PUT_CALLBACK(spp_fputs) {

 if (spp_pipe_fd) {
  fprintf (spp_pipe_fd, "%s", buf);
 } else

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
# 20 "project/radare2/shlr/spp/config.def.h" 2
# 1 "project/radare2/shlr/spp/p/acr.h" 1


static char *pkgname = NULL;
static char *version = NULL;
static char **slurp_ptr = NULL;

static int slurp_args(char *buf) {
 if (slurp_ptr) {
  *slurp_ptr = strdup (buf);
  slurp_ptr = NULL;
  return 1;
 }
 return 0;
}

static TAG_CALLBACK(acr_default) {

 if (slurp_args (buf)) {
  return 0;
 }
 if (!strcmp (buf, "PKGNAME")) {
  slurp_ptr = &pkgname;
 } else if (!strcmp (buf, "VERSION")) {
  slurp_ptr = &version;
 }
 return 0;
}

static TAG_CALLBACK(acr_eof) {
 printf ("Report:\n pkgname: %s\n version: %s\n", pkgname, version);
 return 0;
}

DLL_LOCAL struct Tag acr_tags[] = {
 { NULL, acr_default },
 { NULL }
};

DLL_LOCAL struct Arg acr_args[] = {
 { NULL }
};

DLL_LOCAL struct Proc acr_proc = {
 .name = "acr",
 .tags = (struct Tag **)acr_tags,
 .args = (struct Arg **)acr_args,
 .token = " ",
 .eof = &acr_eof,
 .tag_pre = NULL,
 .tag_post = NULL,
 .multiline = NULL,
 .default_echo = 1,
 .chop = 0,
 .tag_begin = 0,
};
# 21 "project/radare2/shlr/spp/config.def.h" 2
# 1 "project/radare2/shlr/spp/p/pod.h" 1


static TAG_CALLBACK(pod_default) {
 out_printf (out, "DEFAULT: (%s)\n", buf);
 return 0;
}

static TAG_CALLBACK(pod_cut) {
 out_printf (out, "\n");
 state->echo[state->ifl] = 0;
 return 0;
}

static TAG_CALLBACK(pod_head1) {
 state->echo[state->ifl] = 1;
 out_printf (out, "\n");
 if (!buf) {
  return 0;
 }
 out_printf (out, "%s\n", buf);
 int i, len = strlen (buf);
 for (i = 0; i < len; i++) {
  out_printf (out, "%c", '=');
 }
 out_printf (out, "\n");
 return 0;
}

static struct Tag pod_tags[] = {
 { "head1", pod_head1 },
 { "cut", pod_cut },
 { NULL, pod_default },
 { NULL }
};

static struct Arg pod_args[] = {
 { NULL }
};

DLL_LOCAL struct Proc pod_proc = {
 .name = "pod",
 .tags = (struct Tag **)pod_tags,
 .args = (struct Arg **)pod_args,
 .token = " ",
 .eof = NULL,
 .tag_pre = "=",
 .tag_post = "\n",
 .multiline = NULL,
 .default_echo = 0,
 .chop = 0,
 .tag_begin = 1,
};
# 22 "project/radare2/shlr/spp/config.def.h" 2
# 1 "project/radare2/shlr/spp/p/cpp.h" 1


static TAG_CALLBACK(cpp_default) {
 out_printf (out, "DEFAULT: (%s)\n", buf);
 return 0;
}

static TAG_CALLBACK(cpp_error) {
 out_printf (out, "\n");
 if (state->echo[state->ifl] && buf) {
  out_printf (out, "ERROR: %s (line=%d)\n", buf, state->lineno);
  return -1;
 }
 return 0;
}

static TAG_CALLBACK(cpp_warning) {
 out_printf (out,"\n");
 if (state->echo[state->ifl] && buf != NULL) {
  out_printf (out, "WARNING: line %d: %s\n", state->lineno, buf);
 }
 return 0;
}

static TAG_CALLBACK(cpp_if) {
 char *var = getenv (buf + ((*buf == '!') ? 1 : 0));
 if (var && *var == '1') {
  state->echo[state->ifl + 1] = 1;
 } else {
  state->echo[state->ifl + 1] = 0;
 }
 if (*buf == '!') {
  state->echo[state->ifl + 1] = !!!state->echo[state->ifl + 1];
 }
 return 1;
}

static TAG_CALLBACK(cpp_ifdef) {
 char *var = getenv (buf);
 state->echo[state->ifl + 1] = var? 1: 0;
 return 1;
}

static TAG_CALLBACK(cpp_else) {
 state->echo[state->ifl] = state->echo[state->ifl]? 0: 1;
 return 0;
}

static TAG_CALLBACK(cpp_ifndef) {
 cpp_ifdef (state, out, buf);
 cpp_else (state, out, buf);
 return 1;
}

static struct cpp_macro_t {
 char *name;
 char *args;
 char *body;
} cpp_macros[10];

static int cpp_macros_n = 0;

static void cpp_macro_add(char *name, char *args, char *body) {
 char *ptr;
 cpp_macros[cpp_macros_n].args = strdup(args);
 cpp_macros[cpp_macros_n].body = strdup(body);
 ptr = strchr (name, '(');
 if (ptr) {
  ptr[1] = '\0';
 }
 cpp_macros[cpp_macros_n].name = strdup(name);
 cpp_macros_n++;
}

static PUT_CALLBACK(cpp_fputs) {
 int i;
 for (i = 0; i < cpp_macros_n; i++) {
  if (strstr(buf, cpp_macros[i].name)) {
   fprintf (stderr, "MACRO (%s) HIT\n",
    cpp_macros[i].name);
  }
 }
 out_printf (out, "%s", buf);
 return 0;
}

static TAG_CALLBACK(cpp_define) {
 char *eq = strchr (buf, ' ');
 if (eq) {
  char *ptr = eq + 1;
  char *macro = strchr(buf, '(');
  *eq = '\0';
  if (macro) {

   ptr = strchr (macro + 1, ')');
   if (!ptr) {
    fprintf(stderr, "Invalid syntax\n");
    return 1;
   }
   ptr = ptr + 1;
   fprintf(stderr, "REGISTER MACRO:\n");
   fprintf(stderr, "  name: %s\n", buf);
   fprintf(stderr, "  args: %s\n", macro);
   fprintf(stderr, "  body: %s\n", ptr+1);
   cpp_macro_add(buf,macro,ptr+1);

  }
  r_sys_setenv (buf, ptr);
 } else r_sys_setenv (buf, "");
 return 0;
}

static TAG_CALLBACK(cpp_endif) {
 return -1;
}

static TAG_CALLBACK(cpp_include) {
 if (state->echo[state->ifl]) {
  spp_file (buf, out);
 }
 return 0;
}

DLL_LOCAL struct Tag cpp_tags[] = {
 { "ifdef", cpp_ifdef },
 { "ifndef", cpp_ifndef },
 { "endif", cpp_endif },
 { "if", cpp_if },
 { "else", cpp_else },
 { "include", cpp_include },
 { "define", cpp_define },
 { "error", cpp_error },
 { "warning", cpp_warning },
 { NULL, cpp_default },
 { NULL }
};



static ARG_CALLBACK(cpp_arg_i) {
 printf("INCLUDEDIR(%s)\n", arg);
 return 0;
}

static ARG_CALLBACK(cpp_arg_d) {

 char *eq = strchr (arg, '=');
 if (eq) {
  *eq = '\0';
  r_sys_setenv (arg, eq + 1);
 } else {
  r_sys_setenv (arg, "");
 }
 return 0;
}

static struct Arg cpp_args[] = {
 { "-I", "add include directory", 1, cpp_arg_i },
 { "-D", "define value of variable", 1, cpp_arg_d },
 { NULL }
};

DLL_LOCAL struct Proc cpp_proc = {
 .name = "cpp",
 .tags = (struct Tag **)cpp_tags,
 .args = (struct Arg **)cpp_args,
 .token = " ",
 .eof = NULL,
 .tag_pre = "#",
 .tag_post = "\n",
 .multiline = "\\\n",
 .default_echo = 1,
 .fputs = cpp_fputs,
 .chop = 0,
 .tag_begin = 1,
};
# 23 "project/radare2/shlr/spp/config.def.h" 2

struct Proc *procs[] = {
 &spp_proc,
 &cpp_proc,
 &pod_proc,
 &acr_proc,

 &sh_proc,

 NULL
};

DEFAULT_PROC(spp)
