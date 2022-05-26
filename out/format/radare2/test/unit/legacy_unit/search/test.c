# 1 "project/radare2/test/unit/legacy_unit/search/test.c"
#include <r_search.h>


char *buffer = "helloworldlibisnlizbiceandcoolib2loblubljb";

static int hit(RSearchKeyword *kw, void *user, ut64 addr) {

 printf ("HIT %d AT %"PFMT64d" (%s)\n", kw->count, addr, buffer+addr);
 return 1;
}

int main(int argc, char **argv) {
 RSearch *rs = r_search_new (R_SEARCH_KEYWORD);
 r_search_kw_add (rs,
  r_search_keyword_new_str ("lib", "", NULL, 0));
 r_search_set_callback (rs, &hit, buffer);
 r_search_set_distance (rs, 0);
 printf ("Distance: %d\n", rs->distance);
 r_search_begin (rs);
 printf ("Searching for '%s' in '%s'\n", "lib", buffer);
 r_search_update (rs, 0LL, (ut8 *)buffer, strlen (buffer));

 printf("--\n");

 r_search_set_distance (rs, 4);
 printf ("Distance: %d\n", rs->distance);
 r_search_begin (rs);
 printf ("Searching for '%s' in '%s'\n", "lib", buffer);
 r_search_update (rs, 0LL, (ut8 *)buffer, strlen (buffer));
 rs = r_search_free (rs);

 printf("--\n");


 rs = r_search_new (R_SEARCH_KEYWORD);
 {
  RSearchKeyword *kw = r_search_keyword_new_str ("lib", "ff00ff", NULL, 0);
  printf ("Keyword (%02x %02x %02x)\n", kw->bin_binmask[0],
   kw->bin_binmask[1], kw->bin_binmask[2]);
  r_search_kw_add (rs, kw);
 }
 r_search_set_callback (rs, &hit, buffer);
 r_search_begin (rs);
 printf ("Searching for '%s' with binmask 'ff00ff' in '%s'\n", "lib", buffer);
 r_search_update (rs, 0LL, (ut8 *)buffer, strlen (buffer));
 rs = r_search_free (rs);
 return 0;
}
