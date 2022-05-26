# 1 "project/radare2/libr/anal/d/types-linux.c"


#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"wait","func"},
  {"func.__cxa_throw.args","3"},
  {"access","func"},
  {"func.errx.ret","void"},
  {"__stack_chk_fail","func"},
  {"func.exit.arg.0","int,status"},
  {"func.prctl.arg.0","int,option"},
  {"func.err.ret","void"},
  {"func.prctl.arg.1","unsigned long,v2"},
  {"func.__stack_chk_fail.ret","void"},
  {"func.prctl.arg.2","unsigned long,v3"},
  {"atexit","func"},
  {"func.waitid.arg.3","int,options"},
  {"func.prctl.arg.3","unsigned long,v4"},
  {"func.waitid.arg.2","siginfo_t *,infop"},
  {"func.prctl.arg.4","unsigned long,v5"},
  {"func.waitid.arg.1","id_t,id"},
  {"func.waitid.arg.0","idtype_t,idtype"},
  {"errx","func"},
  {"func._exit.noreturn","true"},
  {"nanosleep","func"},
  {"__assert_fail","func"},
  {"func._exit.args","1"},
  {"func.errc.arg.2","const char *,fmt"},
  {"func.sigaction.arg.2","struct sigaction *,oldact"},
  {"func.errc.arg.1","int,code"},
  {"func.access.arg.1","int,mode"},
  {"func.errc.arg.0","int,eval"},
  {"func.access.arg.0","const char *,path"},
  {"func.sigaction.arg.0","int,signum"},
  {"func.sigaction.arg.1","const struct sigaction *,act"},
  {"func.__libc_start_main.arg.6","void *,stack_end"},
  {"func.__libc_start_main.arg.4","func,fini"},
  {"func.__libc_start_main.arg.5","func,rtld_fini"},
  {"func.__libc_start_main.arg.2","char **,ubp_av"},
  {"func.abort.ret","void"},
  {"func.__libc_start_main.arg.3","func,init"},
  {"func.getsockname.args","3"},
  {"waitid","func"},
  {"func.__libc_start_main.arg.0","func,main"},
  {"func.__stack_chk_fail.noreturn","true"},
  {"func.__libc_start_main.arg.1","int,argc"},
  {"func.__libc_init.ret","void"},
  {"func.getsockname.ret","int"},
  {"prctl","func"},
  {"setsockopt","func"},
  {"func.abort.noreturn","true"},
  {"func.select.arg.1","fd_set *,readfds"},
  {"func.select.arg.0","int,nfds"},
  {"__libc_start_main","func"},
  {"func.select.arg.3","fd_set *,exceptfds"},
  {"func.select.arg.2","fd_set *,writefds"},
  {"func.select.arg.4","struct timeval *,timeout"},
  {"getsockname","func"},
  {"__uClibc_main","func"},
  {"sigaction","func"},
  {"__libc_init_array","func"},
  {"func.prctl.args","5"},
  {"func.waitpid.arg.2","int,options"},
  {"func.waitpid.arg.1","int *,wstatus"},
  {"func.waitpid.arg.0","pid_t,pid"},
  {"func.errc.args","1"},
  {"func.nanosleep.args","2"},
  {"func.__cxa_throw.arg.2","void *,dest"},
  {"exit","func"},
  {"func.__cxa_throw.arg.0","void *,thrown_exception"},
  {"func.__cxa_throw.arg.1","struct std::type_info *,tinfo"},
  {"func.__assert_fail.ret","void"},
  {"func.setsockopt.arg.4","socklen_t,optlen"},
  {"__libc_init","func"},
  {"func.errc.ret","void"},
  {"func.__cxa_throw.noreturn","true"},
  {"func.waitpid.args","3"},
  {"func.select.ret","int"},
  {"func.access.ret","int"},
  {"func.setsockopt.arg.0","int,sockfd"},
  {"func.setsockopt.arg.1","int,level"},
  {"func.setsockopt.arg.2","int,optname"},
  {"func.setsockopt.arg.3","void *,optval"},
  {"func.waitid.args","4"},
  {"err","func"},
  {"func.__libc_init.noreturn","true"},
  {"waitpid","func"},
  {"func.__libc_start_main.noreturn","true"},
  {"func.setsockopt.ret","int"},
  {"func.waitpid.ret","pid_t"},
  {"_exit","func"},
  {"__cxa_throw","func"},
  {"func.__uClibc_main.arg.6","void *,stack_end"},
  {"func._exit.arg.0","int,status"},
  {"func.__uClibc_main.arg.5","func,rtld_fini"},
  {"func.__uClibc_main.arg.4","func,app_fini"},
  {"func.__uClibc_main.arg.3","func,app_init"},
  {"func.wait.ret","pid_t"},
  {"func._Exit.ret","void"},
  {"func.__uClibc_main.arg.2","char **,argv"},
  {"func.atexit.ret","int"},
  {"func.__uClibc_main.arg.1","int,argc"},
  {"func.abort.args","0"},
  {"func.wait.args","1"},
  {"func.__uClibc_main.arg.0","func,main"},
  {"func._Exit.arg.0","int,status"},
  {"func.__uClibc_main.args","7"},
  {"func.atexit.arg.0","func,function"},
  {"func.prctl.ret","int"},
  {"abort","func"},
  {"getsockopt","func"},
  {"func.err.arg.0","int,eval"},
  {"func.err.arg.1","const char *,fmt"},
  {"func.errc.noreturn","true"},
  {"_Exit","func"},
  {"func._Exit.noreturn","true"},
  {"func.__libc_start_main.ret","int"},
  {"func.access.args","2"},
  {"func.errx.noreturn","true"},
  {"func.select.args","5"},
  {"func._exit.ret","void"},
  {"func.exit.ret","void"},
  {"func.getsockopt.ret","int"},
  {"select","func"},
  {"func.__cxa_throw.ret","void"},
  {"func.nanosleep.ret","int"},
  {"func.waitid.ret","int"},
  {"func.setsockopt.args","5"},
  {"func.__stack_chk_fail.args","0"},
  {"func._Exit.args","1"},
  {"func.atexit.args","1"},
  {"func.getsockopt.arg.0","int,sockfd"},
  {"func.exit.noreturn","true"},
  {"func.getsockopt.arg.1","int,level"},
  {"func.getsockopt.arg.2","int,optname"},
  {"func.getsockopt.arg.3","void *,optval"},
  {"func.getsockopt.arg.4","socklen_t *,optlen"},
  {"func.getsockopt.args","5"},
  {"func.nanosleep.arg.0","const struct timespec *,req"},
  {"func.nanosleep.arg.1","struct timespec *,rem"},
  {"func.__libc_init_array.args","0"},
  {"func.getsockname.arg.0","int,sockfd"},
  {"func.__libc_init_array.ret","void"},
  {"func.getsockname.arg.1","struct sockaddr *,addr"},
  {"func.getsockname.arg.2","socklen_t *,addrlen"},
  {"func.err.args","1"},
  {"func.errx.arg.0","int,eval"},
  {"func.sigaction.ret","int"},
  {"func.errx.arg.1","const char *,fmt"},
  {"func.__assert_fail.noreturn","true"},
  {"func.__assert_fail.arg.2","unsigned int,line"},
  {"func.__libc_init.args","3"},
  {"func.__assert_fail.arg.3","const char *,function"},
  {"func.__libc_init.arg.0","int,argc"},
  {"func.__assert_fail.arg.0","const char *,assertion"},
  {"func.__libc_init.arg.1","char **,argv"},
  {"func.__assert_fail.arg.1","const char *,file"},
  {"func.__libc_init.arg.2","char **,envp"},
  {"func.errx.args","1"},
  {"func.__assert_fail.args","4"},
  {"func.__uClibc_main.ret","int"},
  {"func.wait.arg.0","int *,wstatus"},
  {"func.exit.args","1"},
  {"func.__libc_start_main.args","7"},
  {"func.err.noreturn","true"},
  {"errc","func"},
  {"func.__uClibc_main.noreturn","true"},
  {"func.sigaction.args","3"},
  {NULL, NULL}
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_types_linux_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_types_linux_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_types_linux(x,y) gperf_types_linux_hash(x)
const unsigned int gperf_types_linux_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_types_linux = {
  .name = "types-linux",
  .get = &gperf_types_linux_get,
  .hash = &gperf_types_linux_hash,
  .foreach = &gperf_types_linux_foreach
};

#if MAIN
int main () {
 const char *s = ((char*(*)(char*))gperf_types_linux.get)("foo");
 printf ("%s\n", s);
}
#endif
