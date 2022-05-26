# 1 "project/radare2/libr/syscall/d/openbsd-x86-64.c"


#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"setrlimit","0x80,195,2,"},
  {"shutdown","0x80,134,2,"},
  {"ktrace","0x80,45,4,"},
  {"munmap","0x80,73,2,"},
  {"recvfrom","0x80,29,6,"},
  {"truncate","0x80,200,3,"},
  {"mlockall","0x80,271,1,"},
  {"chroot","0x80,61,1,"},
  {"mprotect","0x80,74,3,"},
  {"mkdir","0x80,136,2,"},
  {"fstat","0x80,292,2,"},
  {"getgid","0x80,47,0,"},
  {"thrwakeup","0x80,301,2,"},
  {"setuid","0x80,23,1,"},
  {"setpgid","0x80,82,2,"},
  {"settimeofday","0x80,122,2,"},
  {"0x80.155","nfssvc"},
  {"unlink","0x80,10,1,"},
  {"msgsnd","0x80,226,4,"},
  {"setitimer","0x80,83,3,"},
  {"geteuid","0x80,25,0,"},
  {"writev","0x80,121,3,"},
  {"0x80.208","nnpfspioctl"},
  {"chmod","0x80,15,2,"},
  {"0x80.201","ftruncate"},
  {"0x80.200","truncate"},
  {"0x80.203","mlock"},
  {"msync","0x80,256,3,"},
  {"0x80.202","__sysctl"},
  {"0x80.204","munlock"},
  {"closefrom","0x80,287,1,"},
  {"0x80.207","getpgid"},
  {"0x80.206","futimes"},
  {"0x80.193","swapctl"},
  {"0x80.192","fpathconf"},
  {"0x80.191","pathconf"},
  {"0x80.197","mmap"},
  {"_","0x80"},
  {"0x80.196","getdirentries"},
  {"sched_yield","0x80,298,0,"},
  {"0x80.195","setrlimit"},
  {"getsockname","0x80,32,3,"},
  {"0x80.194","getrlimit"},
  {"0x80.199","lseek"},
  {"accept","0x80,30,3,"},
  {"0x80.198","__syscall"},
  {"chown","0x80,16,3,"},
  {"issetugid","0x80,253,0,"},
  {"nfssvc","0x80,155,2,"},
  {"symlink","0x80,57,2,"},
  {"revoke","0x80,56,1,"},
  {"dup2","0x80,90,2,"},
  {"getrusage","0x80,117,2,"},
  {"munlock","0x80,204,2,"},
  {"0x80.9","link"},
  {"fchdir","0x80,13,1,"},
  {"0x80.3","read"},
  {"0x80.2","fork"},
  {"swapctl","0x80,193,3,"},
  {"0x80.1","exit"},
  {"0x80.0","syscall"},
  {"0x80.7","wait4"},
  {"fpathconf","0x80,192,2,"},
  {"0x80.6","close"},
  {"0x80.228","shmat"},
  {"0x80.5","open"},
  {"0x80.4","write"},
  {"0x80.29","recvfrom"},
  {"0x80.28","sendmsg"},
  {"readv","0x80,120,3,"},
  {"0x80.221","semget"},
  {"0x80.227","msgrcv"},
  {"setsid","0x80,147,0,"},
  {"0x80.226","msgsnd"},
  {"0x80.225","msgget"},
  {"madvise","0x80,75,3,"},
  {"0x80.21","mount"},
  {"setregid","0x80,127,2,"},
  {"0x80.20","getpid"},
  {"0x80.23","setuid"},
  {"0x80.22","unmount"},
  {"0x80.25","geteuid"},
  {"rfork","0x80,251,1,"},
  {"nanosleep","0x80,240,2,"},
  {"0x80.24","getuid"},
  {"pipe","0x80,263,1,"},
  {"0x80.27","recvmsg"},
  {"0x80.26","ptrace"},
  {"lchown","0x80,254,3,"},
  {"ptrace","0x80,26,4,"},
  {"getresuid","0x80,281,3,"},
  {"shmctl","0x80,296,3,"},
  {"msgrcv","0x80,227,5,"},
  {"quotactl","0x80,148,4,"},
  {"futimes","0x80,206,2,"},
  {"stat","0x80,291,2,"},
  {"minherit","0x80,250,3,"},
  {"0x80.39","getppid"},
  {"0x80.232","clock_gettime"},
  {"semop","0x80,290,3,"},
  {"nnpfspioctl","0x80,208,5,"},
  {"0x80.233","clock_settime"},
  {"setsockopt","0x80,105,5,"},
  {"getppid","0x80,39,0,"},
  {"0x80.230","shmdt"},
  {"setresuid","0x80,282,3,"},
  {"0x80.234","clock_getres"},
  {"0x80.30","accept"},
  {"0x80.31","getpeername"},
  {"0x80.32","getsockname"},
  {"profil","0x80,44,4,"},
  {"0x80.33","access"},
  {"clock_gettime","0x80,232,2,"},
  {"0x80.34","chflags"},
  {"0x80.35","fchflags"},
  {"0x80.36","sync"},
  {"readlink","0x80,58,3,"},
  {"0x80.37","kill"},
  {"pwritev","0x80,268,5,"},
  {"poll","0x80,252,3,"},
  {"recvmsg","0x80,27,3,"},
  {"0x80.128","rename"},
  {"lstat","0x80,293,2,"},
  {"getpgid","0x80,207,1,"},
  {"getfsstat","0x80,306,3,"},
  {"0x80.120","readv"},
  {"__getcwd","0x80,304,2,"},
  {"0x80.121","writev"},
  {"0x80.122","settimeofday"},
  {"0x80.123","fchown"},
  {"0x80.124","fchmod"},
  {"sendto","0x80,133,6,"},
  {"0x80.126","setreuid"},
  {"0x80.127","setregid"},
  {"adjtime","0x80,140,2,"},
  {"statfs","0x80,307,2,"},
  {"mount","0x80,21,4,"},
  {"0x80.240","nanosleep"},
  {"lfs_segwait","0x80,187,2,"},
  {"unmount","0x80,22,2,"},
  {"chflags","0x80,34,2,"},
  {"sigsuspend","0x80,111,1,"},
  {"setrtable","0x80,310,1,"},
  {"getuid","0x80,24,0,"},
  {"flock","0x80,131,2,"},
  {"clock_getres","0x80,234,2,"},
  {"acct","0x80,51,1,"},
  {"connect","0x80,98,3,"},
  {"0x80.308","fstatfs"},
  {"mmap","0x80,197,7,"},
  {"0x80.309","fhstatfs"},
  {"getresgid","0x80,283,3,"},
  {"thrsleep","0x80,300,4,"},
  {"getpgrp","0x80,81,0,"},
  {"0x80.254","lchown"},
  {"fhstatfs","0x80,309,2,"},
  {"socketpair","0x80,135,4,"},
  {"0x80.255","getsid"},
  {"0x80.256","msync"},
  {"0x80.300","thrsleep"},
  {"0x80.301","thrwakeup"},
  {"0x80.250","minherit"},
  {"msgget","0x80,225,2,"},
  {"0x80.302","threxit"},
  {"0x80.251","rfork"},
  {"getdirentries","0x80,196,4,"},
  {"0x80.303","thrsigdivert"},
  {"0x80.252","poll"},
  {"setegid","0x80,182,1,"},
  {"mkfifo","0x80,132,2,"},
  {"mlock","0x80,203,2,"},
  {"0x80.304","__getcwd"},
  {"chdir","0x80,12,1,"},
  {"0x80.281","getresuid"},
  {"0x80.12","chdir"},
  {"0x80.253","issetugid"},
  {"0x80.305","adjfreq"},
  {"0x80.13","fchdir"},
  {"0x80.306","getfsstat"},
  {"getrtable","0x80,311,0,"},
  {"0x80.283","getresgid"},
  {"0x80.10","unlink"},
  {"getsid","0x80,255,1,"},
  {"0x80.307","statfs"},
  {"0x80.282","setresuid"},
  {"0x80.16","chown"},
  {"0x80.284","setresgid"},
  {"0x80.17","break"},
  {"0x80.287","closefrom"},
  {"0x80.14","mknod"},
  {"0x80.286","mquery"},
  {"0x80.15","chmod"},
  {"rename","0x80,128,2,"},
  {"shmat","0x80,228,3,"},
  {"0x80.289","shmget"},
  {"0x80.288","sigaltstack"},
  {"dup","0x80,41,1,"},
  {"fchmod","0x80,124,2,"},
  {"getpid","0x80,20,0,"},
  {"setlogin","0x80,50,1,"},
  {"0x80.103","sigreturn"},
  {"pwrite","0x80,174,5,"},
  {"0x80.100","getpriority"},
  {"ioctl","0x80,54,3,"},
  {"0x80.106","listen"},
  {"bind","0x80,104,3,"},
  {"sigprocmask","0x80,48,2,"},
  {"close","0x80,6,1,"},
  {"kill","0x80,37,2,"},
  {"0x80.104","bind"},
  {"0x80.105","setsockopt"},
  {"0x80.269","kqueue"},
  {"0x80.268","pwritev"},
  {"0x80.267","preadv"},
  {"0x80.69","sbrk"},
  {"0x80.264","fhopen"},
  {"pread","0x80,173,5,"},
  {"0x80.263","pipe"},
  {"0x80.290","semop"},
  {"semget","0x80,221,3,"},
  {"0x80.291","stat"},
  {"0x80.292","fstat"},
  {"0x80.293","lstat"},
  {"0x80.66","vfork"},
  {"setgroups","0x80,80,2,"},
  {"0x80.294","fhstat"},
  {"0x80.61","chroot"},
  {"0x80.295","__semctl"},
  {"0x80.60","umask"},
  {"0x80.296","shmctl"},
  {"getitimer","0x80,86,2,"},
  {"0x80.297","msgctl"},
  {"0x80.298","sched_yield"},
  {"0x80.138","utimes"},
  {"0x80.299","getthrid"},
  {"setreuid","0x80,126,2,"},
  {"fstatfs","0x80,308,2,"},
  {"sigpending","0x80,52,0,"},
  {"0x80.131","flock"},
  {"read","0x80,3,3,"},
  {"0x80.133","sendto"},
  {"sendmsg","0x80,28,3,"},
  {"0x80.132","mkfifo"},
  {"0x80.135","socketpair"},
  {"socket","0x80,97,3,"},
  {"0x80.134","shutdown"},
  {"0x80.137","rmdir"},
  {"0x80.136","mkdir"},
  {"reboot","0x80,55,1,"},
  {"preadv","0x80,267,5,"},
  {"syscall","0x80,0,2,"},
  {"0x80.78","mincore"},
  {"thrsigdivert","0x80,303,3,"},
  {"select","0x80,93,5,"},
  {"0x80.79","getgroups"},
  {"0x80.272","munlockall"},
  {"0x80.273","getpeereid"},
  {"0x80.270","kevent"},
  {"0x80.74","mprotect"},
  {"0x80.271","mlockall"},
  {"0x80.75","madvise"},
  {"0x80.70","sstk"},
  {"setresgid","0x80,284,3,"},
  {"getegid","0x80,43,0,"},
  {"fhopen","0x80,264,2,"},
  {"wait4","0x80,7,4,"},
  {"kqueue","0x80,269,0,"},
  {"0x80.73","munmap"},
  {"getrlimit","0x80,194,2,"},
  {"sbrk","0x80,69,1,"},
  {"access","0x80,33,2,"},
  {"execve","0x80,59,3,"},
  {"0x80.165","sysarch"},
  {"getpeereid","0x80,273,3,"},
  {"write","0x80,4,3,"},
  {"fork","0x80,2,0,"},
  {"mquery","0x80,286,7,"},
  {"0x80.161","getfh"},
  {"fchflags","0x80,35,2,"},
  {"sysarch","0x80,165,2,"},
  {"osigaltstack","0x80,53,2,"},
  {"listen","0x80,106,2,"},
  {"lfs_markv","0x80,185,3,"},
  {"0x80.311","getrtable"},
  {"fchown","0x80,123,3,"},
  {"0x80.310","setrtable"},
  {"pathconf","0x80,191,2,"},
  {"__sysctl","0x80,202,6,"},
  {"0x80.49","getlogin"},
  {"0x80.48","sigprocmask"},
  {"0x80.47","getgid"},
  {"0x80.46","sigaction"},
  {"opipe","0x80,42,0,"},
  {"exit","0x80,1,1,"},
  {"msgctl","0x80,297,3,"},
  {"0x80.45","ktrace"},
  {"0x80.44","profil"},
  {"getpeername","0x80,31,3,"},
  {"0x80.43","getegid"},
  {"shmdt","0x80,230,1,"},
  {"0x80.42","opipe"},
  {"0x80.41","dup"},
  {"getpriority","0x80,100,2,"},
  {"sigaltstack","0x80,288,2,"},
  {"0x80.118","getsockopt"},
  {"getsockopt","0x80,118,5,"},
  {"setgid","0x80,181,1,"},
  {"munlockall","0x80,272,0,"},
  {"0x80.111","sigsuspend"},
  {"0x80.117","getrusage"},
  {"sstk","0x80,70,1,"},
  {"0x80.116","gettimeofday"},
  {"gettimeofday","0x80,116,2,"},
  {"fcntl","0x80,92,3,"},
  {"seteuid","0x80,183,1,"},
  {"threxit","0x80,302,1,"},
  {"__syscall","0x80,198,2,"},
  {"__semctl","0x80,295,4,"},
  {"0x80.58","readlink"},
  {"0x80.59","execve"},
  {"0x80.56","revoke"},
  {"0x80.57","symlink"},
  {"0x80.54","ioctl"},
  {"lfs_bmapv","0x80,184,3,"},
  {"0x80.55","reboot"},
  {"rmdir","0x80,137,1,"},
  {"0x80.52","sigpending"},
  {"0x80.53","osigaltstack"},
  {"0x80.50","setlogin"},
  {"0x80.83","setitimer"},
  {"0x80.51","acct"},
  {"0x80.82","setpgid"},
  {"lseek","0x80,199,4,"},
  {"0x80.81","getpgrp"},
  {"mincore","0x80,78,3,"},
  {"0x80.80","setgroups"},
  {"getfh","0x80,161,2,"},
  {"getgroups","0x80,79,2,"},
  {"0x80.86","getitimer"},
  {"fhstat","0x80,294,2,"},
  {"0x80.148","quotactl"},
  {"0x80.147","setsid"},
  {"utimes","0x80,138,2,"},
  {"0x80.140","adjtime"},
  {"kevent","0x80,270,6,"},
  {"mknod","0x80,14,3,"},
  {"umask","0x80,60,1,"},
  {"sigaction","0x80,46,3,"},
  {"link","0x80,9,2,"},
  {"getlogin","0x80,49,2,"},
  {"0x80.92","fcntl"},
  {"0x80.93","select"},
  {"vfork","0x80,66,0,"},
  {"0x80.90","dup2"},
  {"0x80.96","setpriority"},
  {"0x80.97","socket"},
  {"0x80.95","fsync"},
  {"adjfreq","0x80,305,2,"},
  {"0x80.174","pwrite"},
  {"0x80.98","connect"},
  {"shmget","0x80,289,3,"},
  {"getthrid","0x80,299,0,"},
  {"lfs_segclean","0x80,186,2,"},
  {"0x80.173","pread"},
  {"0x80.182","setegid"},
  {"0x80.183","seteuid"},
  {"sync","0x80,36,0,"},
  {"fsync","0x80,95,1,"},
  {"0x80.181","setgid"},
  {"0x80.186","lfs_segclean"},
  {"0x80.187","lfs_segwait"},
  {"0x80.184","lfs_bmapv"},
  {"0x80.185","lfs_markv"},
  {"break","0x80,17,1,"},
  {"open","0x80,5,3,"},
  {"clock_settime","0x80,233,2,"},
  {"sigreturn","0x80,103,1,"},
  {"ftruncate","0x80,201,3,"},
  {"setpriority","0x80,96,3,"},
  {NULL, NULL}
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_openbsd_x86_64_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_openbsd_x86_64_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_openbsd_x86_64(x,y) gperf_openbsd_x86_64_hash(x)
const unsigned int gperf_openbsd_x86_64_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_openbsd_x86_64 = {
  .name = "openbsd-x86-64",
  .get = &gperf_openbsd_x86_64_get,
  .hash = &gperf_openbsd_x86_64_hash,
  .foreach = &gperf_openbsd_x86_64_foreach
};

#if MAIN
int main () {
 const char *s = ((char*(*)(char*))gperf_openbsd_x86_64.get)("foo");
 printf ("%s\n", s);
}
#endif
