# 0 "project/radare2/shlr/sdb/src/json/indent.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/shlr/sdb/src/json/indent.c"


# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 1 3 4
# 34 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 3 4
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 1 3 4
# 203 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 1 3 4
# 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 1 3 4
# 649 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 650 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 715 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 716 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/cdefs.h" 2 3 4
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/limits.h" 1 3 4





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/limits.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/_limits.h" 1 3 4
# 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/i386/limits.h" 2 3 4
# 7 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/machine/limits.h" 2 3 4
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/sys/syslimits.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.sdk/usr/include/limits.h" 2 3 4
# 204 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 2 3 4
# 8 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include-fixed/limits.h" 2 3 4
# 4 "project/radare2/shlr/sdb/src/json/indent.c" 2

static void doIndent(int idt, char **o, const char *tab) {
 int i;
 char *x;
 for (i = 0; i < idt; i++) {
  for (x = (char *) tab; *x; x++) {
   *(*o)++ = *x;
  }
 }
}

SDB_API char *sdb_json_indent(const char *s, const char *tab) {
 int idx, indent = 0;
 int instr = 0;
 size_t o_size = 0;
 char *o, *O;
 if (!s) {
  return NULL;
 }

 size_t tab_len = strlen (tab);
 for (idx = 0; s[idx]; idx++) {
  if (o_size > 0x7fffffff - (indent * tab_len + 2)) {
   return NULL;
  }

  if (s[idx] == '{' || s[idx] == '[') {
   indent++;

   o_size += indent * tab_len + 2;
  } else if (s[idx] == '}' || s[idx] == ']') {
   if (indent > 0) {
    indent--;
   }

   o_size += indent * tab_len + 2;
  } else if (s[idx] == ',') {

   o_size += indent * tab_len + 2;
  } else if (s[idx] == ':') {
   o_size += 2;
  } else {
   o_size++;
  }
 }

 o_size += 2;
 indent = 0;

 O = malloc (o_size + 1);
 if (!O) {
  return NULL;
 }

 for (o = O; *s; s++) {
  if (instr) {
   if (s[0] == '"') {
    instr = 0;
   } else if (s[0] == '\\' && s[1] == '"') {
    *o++ = *s;
   }
   *o++ = *s;
   continue;
  } else {
   if (s[0] == '"') {
    instr = 1;
   }
  }
  if (*s == '\n' || *s == '\r' || *s == '\t' || *s == ' ') {
   continue;
  }
  switch (*s) {
  case ':':
   *o++ = *s;
   *o++ = ' ';
   break;
  case ',':
   *o++ = *s;
   *o++ = '\n';
   doIndent (indent, &o, tab);
   break;
  case '{':
  case '[':
   *o++ = *s;
   *o++ = (indent != -1)? '\n': ' ';
   indent++;
   doIndent (indent, &o, tab);
   break;
  case '}':
  case ']':
   *o++ = '\n';
   indent--;
   doIndent (indent, &o, tab);
   *o++ = *s;
   break;
  default:
   *o++ = *s;
  }
 }
 *o++ = '\n';
 *o = 0;

 return O;
}


SDB_API char *sdb_json_unindent(const char *s) {
 int instr = 0;
 int len = strlen (s);
 char *o, *O = malloc (len + 1);
 if (!O) {
  return NULL;
 }
 memset (O, 0, len);
 for (o = O; *s; s++) {
  if (instr) {
   if (s[0] != '"') {
    if (s[0] == '\\' && s[1] == '"') {
     *o++ = *s;
    }
   } else {
    instr = 0;
   }
   *o++ = *s;
   continue;
  } else if (s[0] == '"') {
   instr = 1;
  }
  if (*s == '\n' || *s == '\r' || *s == '\t' || *s == ' ') {
   continue;
  }
  *o++ = *s;
 }
 *o = 0;
 return O;
}
