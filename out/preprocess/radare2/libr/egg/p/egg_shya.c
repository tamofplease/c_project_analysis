# 0 "project/radare2/libr/egg/p/egg_shya.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/egg/p/egg_shya.c"
# 14 "project/radare2/libr/egg/p/egg_shya.c"
static RBuffer *build (REgg *egg) {
 RBuffer *buf = r_buf_new ();
 char *key = r_egg_option_get (egg, "key");
 char *seed = r_egg_option_get (egg, "seed");
 eprintf ("TODO: shoorisu yagana shellcode encoder\n");
 free (key);
 free (seed);
 return buf;
}

REggPlugin r_egg_plugin_shya = {
 .name = "shya",
 .type = R_EGG_PLUGIN_ENCODER,
 .desc = "shoorisu yagana",
 .build = (void *)build
};
