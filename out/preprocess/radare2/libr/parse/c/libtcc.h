# 0 "project/radare2/libr/parse/c/libtcc.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/parse/c/libtcc.h"
# 12 "project/radare2/libr/parse/c/libtcc.h"
struct TCCState;

typedef struct TCCState TCCState;


 TCCState *tcc_new(const char* arch, int bits, const char *os);


 void tcc_delete(TCCState *s);


 void tcc_set_lib_path(TCCState *s, const char *path);


 void tcc_set_error_func(TCCState *s, void *error_opaque,
    void (*error_func)(void *opaque, const char *msg));


 int tcc_set_options(TCCState *s, const char *str);





 int tcc_add_include_path(TCCState *s, const char *pathname);


 int tcc_add_sysinclude_path(TCCState *s, const char *pathname);


 void tcc_define_symbol(TCCState *s, const char *sym, const char *value);


 void tcc_undefine_symbol(TCCState *s, const char *sym);





 int tcc_add_file(TCCState *s, const char *filename, const char *dir);


 int tcc_compile_string(TCCState *s, const char *buf);





 int tcc_set_output_type(TCCState *s, int output_type);







 int tcc_add_library_path(TCCState *s, const char *pathname);


 int tcc_add_library(TCCState *s, const char *libraryname);


 int tcc_add_symbol(TCCState *s, const char *name, const void *val);



 int tcc_output_file(TCCState *s, const char *filename);



 int tcc_run(TCCState *s, int argc, char **argv);


 int tcc_relocate(TCCState *s1, void *ptr);
# 94 "project/radare2/libr/parse/c/libtcc.h"
 void *tcc_get_symbol(TCCState *s, const char *name);


void tcc_set_callback (TCCState *s, void (*cb)(const char *,char**), char **p);
