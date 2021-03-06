# 1 "project/radare2/libr/syscall/d/darwin-arm-64.c"


#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"write_nocancel","0x80,397,0,"},
  {"0x80.39","getppid"},
  {"setpgid","0x80,82,0,"},
  {"fpathconf","0x80,192,0,"},
  {"fstatat64","0x80,470,0,"},
  {"fchown","0x80,123,0,"},
  {"0x80.429","audit_session_join"},
  {"0x80.30","accept"},
  {"0x80.428","audit_session_self"},
  {"chroot","0x80,61,0,"},
  {"unmount","0x80,159,0,"},
  {"0x80.31","getpeername"},
  {"0x80.32","getsockname"},
  {"exit","0x80,1,1,"},
  {"acct","0x80,51,0,"},
  {"0x80.33","access"},
  {"0x80.425","__mac_get_mount"},
  {"shutdown","0x80,134,0,"},
  {"0x80.34","chflags"},
  {"0x80.424","__mac_mount"},
  {"0x80.35","fchflags"},
  {"0x80.427","fsgetpath"},
  {"0x80.36","sync"},
  {"0x80.426","__mac_getfsstat"},
  {"0x80.37","kill"},
  {"0x80.421","aio_suspend_nocancel"},
  {"0x80.420","sem_wait_nocancel"},
  {"0x80.423","__semwait_signal_nocancel"},
  {"0x80.422","__sigwait_nocancel"},
  {"0x80.216","mkcomplex"},
  {"setegid","0x80,182,0,"},
  {"recvmsg","0x80,27,3,"},
  {"setxattr","0x80,236,0,"},
  {"thread_selfid","0x80,372,0,"},
  {"csops","0x80,169,0,"},
  {"0x80.229","fsetattrlist"},
  {"0x80.438","shared_region_map_and_slide_np"},
  {"0x80.228","fgetattrlist"},
  {"0x80.439","kas_info"},
  {"setsgroups","0x80,287,0,"},
  {"fchmodat","0x80,467,0,"},
  {"0x80.434","pid_resume"},
  {"0x80.435","pid_hibernate"},
  {"fsctl","0x80,242,0,"},
  {"0x80.223","exchangedata"},
  {"sigaction","0x80,46,0,"},
  {"0x80.436","pid_shutdown_sockets"},
  {"0x80.222","getdirentriesattr"},
  {"0x80.221","setattrlist"},
  {"0x80.430","fileport_makeport"},
  {"ioctl","0x80,54,0,"},
  {"0x80.220","getattrlist"},
  {"0x80.431","fileport_makefd"},
  {"0x80.227","copyfile"},
  {"0x80.432","audit_session_port"},
  {"0x80.226","delete"},
  {"0x80.433","pid_suspend"},
  {"0x80.225","searchfs"},
  {"fchdir","0x80,13,1,i"},
  {"statfs64","0x80,345,0,"},
  {"setuid","0x80,23,1,i"},
  {"mprotect","0x80,74,0,"},
  {"0x80.18","getfsstat"},
  {"fsgetpath","0x80,427,0,"},
  {"0x80.238","removexattr"},
  {"0x80.239","fremovexattr"},
  {"0x80.12","chdir"},
  {"0x80.13","fchdir"},
  {"quotactl","0x80,165,0,"},
  {"0x80.409","connect_nocancel"},
  {"0x80.10","unlink"},
  {"0x80.408","fsync_nocancel"},
  {"__mac_get_mount","0x80,425,0,"},
  {"0x80.407","select_nocancel"},
  {"0x80.16","chown"},
  {"0x80.406","fcntl_nocancel"},
  {"0x80.232","waitevent"},
  {"0x80.308","psynch_rw_unlock"},
  {"0x80.405","msync_nocancel"},
  {"0x80.233","modwatch"},
  {"0x80.14","mknod"},
  {"0x80.309","psynch_rw_unlock2"},
  {"psynch_rw_wrlock","0x80,307,0,"},
  {"0x80.404","accept_nocancel"},
  {"0x80.230","poll"},
  {"0x80.15","chmod"},
  {"0x80.403","recvfrom_nocancel"},
  {"mkcomplex","0x80,216,0,"},
  {"0x80.231","watchevent"},
  {"0x80.402","sendmsg_nocancel"},
  {"sendmsg","0x80,28,3,"},
  {"0x80.236","setxattr"},
  {"setaudit_addr","0x80,358,0,"},
  {"umask_extended","0x80,278,0,"},
  {"0x80.401","recvmsg_nocancel"},
  {"0x80.237","fsetxattr"},
  {"0x80.400","wait4_nocancel"},
  {"0x80.234","getxattr"},
  {"0x80.235","fgetxattr"},
  {"0x80.300","psynch_rw_upgrade"},
  {"fsync","0x80,95,0,"},
  {"stat64_extended","0x80,341,0,"},
  {"aio_return","0x80,314,0,"},
  {"0x80.301","psynch_mutexwait"},
  {"setreuid","0x80,126,0,"},
  {"0x80.302","psynch_mutexdrop"},
  {"work_interval_ctl","0x80,499,0,"},
  {"0x80.303","psynch_cvbroad"},
  {"psynch_cvclrprepost","0x80,312,0,"},
  {"0x80.304","psynch_cvsignal"},
  {"0x80.305","psynch_cvwait"},
  {"0x80.306","psynch_rw_rdlock"},
  {"select","0x80,93,0,"},
  {"0x80.307","psynch_rw_wrlock"},
  {"psynch_rw_upgrade","0x80,300,0,"},
  {"sfi_ctl","0x80,456,0,"},
  {"__mac_set_file","0x80,383,0,"},
  {"setpriority","0x80,96,0,"},
  {"bsdthread_ctl","0x80,478,0,"},
  {"wait4","0x80,7,3,"},
  {"0x80.65","msync"},
  {"fgetattrlist","0x80,228,0,"},
  {"0x80.66","vfork"},
  {"pid_hibernate","0x80,435,0,"},
  {"0x80.416","waitid_nocancel"},
  {"0x80.61","chroot"},
  {"0x80.417","poll_nocancel"},
  {"0x80.245","ffsctl"},
  {"0x80.60","umask"},
  {"0x80.414","pread_nocancel"},
  {"0x80.244","posix_spawn"},
  {"0x80.415","pwrite_nocancel"},
  {"0x80.412","writev_nocancel"},
  {"0x80.413","sendto_nocancel"},
  {"0x80.241","flistxattr"},
  {"setitimer","0x80,83,0,"},
  {"0x80.410","sigsuspend_nocancel"},
  {"0x80.240","listxattr"},
  {"audit","0x80,350,0,"},
  {"0x80.411","readv_nocancel"},
  {"0x80.243","initgroups"},
  {"0x80.242","fsctl"},
  {"fileport_makeport","0x80,430,0,"},
  {"proc_trace_log","0x80,477,0,"},
  {"0x80.520","terminate_with_payload"},
  {"connect_nocancel","0x80,409,0,"},
  {"listen","0x80,106,0,"},
  {"munlockall","0x80,325,0,"},
  {"getpgid","0x80,151,0,"},
  {"adjtime","0x80,140,0,"},
  {"setgid","0x80,181,0,"},
  {"0x80.78","mincore"},
  {"lstat64_extended","0x80,342,0,"},
  {"0x80.79","getgroups"},
  {"proc_telemetry","0x80,451,0,"},
  {"kevent","0x80,363,0,"},
  {"0x80.74","mprotect"},
  {"__nexus_destroy","0x80,507,0,"},
  {"0x80.75","madvise"},
  {"auditctl","0x80,359,0,"},
  {"auditon","0x80,351,0,"},
  {"workq_kernreturn","0x80,368,0,"},
  {"accept","0x80,30,1,i"},
  {"0x80.73","munmap"},
  {"openat_nocancel","0x80,464,0,"},
  {"0x80.328","__pthread_kill"},
  {"umask","0x80,60,0,"},
  {"0x80.329","__pthread_sigmask"},
  {"sigreturn","0x80,184,0,"},
  {"posix_spawn","0x80,244,0,"},
  {"0x80.250","minherit"},
  {"0x80.322","iopolicysys"},
  {"0x80.323","process_policy"},
  {"0x80.320","lio_listio"},
  {"sigsuspend_nocancel","0x80,410,0,"},
  {"0x80.327","issetugid"},
  {"0x80.324","mlockall"},
  {"0x80.325","munlockall"},
  {"guarded_writev_np","0x80,487,0,"},
  {"change_fdguard_np","0x80,444,0,"},
  {"getsgroups","0x80,288,0,"},
  {"__mac_get_link","0x80,384,0,"},
  {"0x80.182","setegid"},
  {"socket","0x80,97,0,"},
  {"0x80.183","seteuid"},
  {"0x80.180","kdebug_trace"},
  {"0x80.181","setgid"},
  {"0x80.187","fdatasync"},
  {"0x80.49","getlogin"},
  {"0x80.184","sigreturn"},
  {"0x80.48","sigprocmask"},
  {"0x80.185","chud"},
  {"0x80.47","getgid"},
  {"fsetattrlist","0x80,229,0,"},
  {"0x80.46","sigaction"},
  {"0x80.188","stat"},
  {"0x80.269","sem_close"},
  {"0x80.189","fstat"},
  {"0x80.268","sem_open"},
  {"0x80.43","getegid"},
  {"0x80.267","shm_unlink"},
  {"0x80.42","pipe"},
  {"0x80.266","shm_open"},
  {"0x80.41","dup"},
  {"0x80.319","aio_write"},
  {"0x80.318","aio_read"},
  {"0x80.508","__nexus_get_opt"},
  {"0x80.509","__nexus_set_opt"},
  {"0x80.506","__nexus_create"},
  {"0x80.311","settid_with_pid"},
  {"0x80.507","__nexus_destroy"},
  {"0x80.310","getsid"},
  {"0x80.504","__nexus_register"},
  {"0x80.313","aio_fsync"},
  {"0x80.505","__nexus_deregister"},
  {"0x80.312","psynch_cvclrprepost"},
  {"0x80.502","necp_client_action"},
  {"link","0x80,9,2,zz"},
  {"0x80.315","aio_suspend"},
  {"0x80.503","__nexus_open"},
  {"0x80.314","aio_return"},
  {"0x80.500","getentropy"},
  {"0x80.317","aio_error"},
  {"0x80.501","necp_open"},
  {"pipe","0x80,42,0,"},
  {"0x80.316","aio_cancel"},
  {"gettid","0x80,286,0,"},
  {"0x80.58","readlink"},
  {"msync","0x80,65,0,"},
  {"0x80.59","execve"},
  {"0x80.56","revoke"},
  {"0x80.57","symlink"},
  {"0x80.54","ioctl"},
  {"0x80.278","umask_extended"},
  {"0x80.55","reboot"},
  {"truncate","0x80,200,0,"},
  {"0x80.279","stat_extended"},
  {"0x80.52","sigpending"},
  {"0x80.276","sem_destroy"},
  {"0x80.53","sigaltstack"},
  {"sigpending","0x80,52,0,"},
  {"0x80.277","open_extended"},
  {"0x80.50","setlogin"},
  {"bsdthread_terminate","0x80,361,0,"},
  {"0x80.274","sem_getvalue"},
  {"0x80.51","acct"},
  {"waitid","0x80,173,0,"},
  {"0x80.275","sem_init"},
  {"readv_nocancel","0x80,411,0,"},
  {"0x80.272","sem_trywait"},
  {"getdtablesize","0x80,89,0,"},
  {"0x80.273","sem_post"},
  {"0x80.348","__pthread_chdir"},
  {"0x80.270","sem_unlink"},
  {"0x80.349","__pthread_fchdir"},
  {"0x80.271","sem_wait"},
  {"chud","0x80,185,0,"},
  {"0x80.344","getdirentries64"},
  {"0x80.345","statfs64"},
  {"lchown","0x80,364,0,"},
  {"0x80.346","fstatfs64"},
  {"0x80.347","getfsstat64"},
  {"0x80.340","lstat64"},
  {"aio_suspend","0x80,315,0,"},
  {"0x80.341","stat64_extended"},
  {"0x80.342","lstat64_extended"},
  {"0x80.343","fstat64_extended"},
  {"stack_snapshot_with_config","0x80,491,0,"},
  {"write","0x80,4,3,"},
  {"setrlimit","0x80,195,0,"},
  {"psynch_cvsignal","0x80,304,0,"},
  {"chmod","0x80,15,2,zi"},
  {"__mac_syscall","0x80,381,0,"},
  {"chflags","0x80,34,0,"},
  {"0x80.339","fstat64"},
  {"0x80.338","stat64"},
  {"fcntl_nocancel","0x80,406,0,"},
  {"fstatfs","0x80,158,0,"},
  {"__pthread_fchdir","0x80,349,0,"},
  {"0x80.333","__pthread_canceled"},
  {"0x80.332","__pthread_markcancel"},
  {"0x80.331","__disable_threadsignal"},
  {"0x80.330","__sigwait"},
  {"getdirentries","0x80,196,0,"},
  {"setwgroups","0x80,289,0,"},
  {"shm_open","0x80,266,0,"},
  {"0x80.336","proc_info"},
  {"0x80.334","__semwait_signal"},
  {"psynch_cvbroad","0x80,303,0,"},
  {"listxattr","0x80,240,0,"},
  {"exchangedata","0x80,223,0,"},
  {"__semwait_signal_nocancel","0x80,423,0,"},
  {"0x80.192","fpathconf"},
  {"0x80.191","pathconf"},
  {"proc_connectx","0x80,447,0,"},
  {"pathconf","0x80,191,0,"},
  {"0x80.190","lstat"},
  {"0x80.197","mmap"},
  {"0x80.196","getdirentries"},
  {"0x80.195","setrlimit"},
  {"0x80.194","getrlimit"},
  {"getppid","0x80,39,0,"},
  {"chdir","0x80,12,1,z"},
  {"getgroups","0x80,79,0,"},
  {"0x80.199","lseek"},
  {"symlink","0x80,57,0,"},
  {"msync_nocancel","0x80,405,0,"},
  {"mkdir_extended","0x80,292,0,"},
  {"0x80.368","workq_kernreturn"},
  {"0x80.518","fs_snapshot"},
  {"0x80.369","kevent64"},
  {"0x80.517","fclonefileat"},
  {"0x80.366","bsdthread_register"},
  {"0x80.516","ulock_wake"},
  {"0x80.367","workq_open"},
  {"0x80.515","ulock_wait"},
  {"0x80.364","lchown"},
  {"aio_error","0x80,317,0,"},
  {"0x80.514","__channel_set_opt"},
  {"0x80.365","stack_snapshot"},
  {"0x80.513","__channel_get_opt"},
  {"0x80.362","kqueue"},
  {"0x80.512","__channel_sync"},
  {"0x80.363","kevent"},
  {"0x80.511","__channel_get_info"},
  {"0x80.360","bsdthread_create"},
  {"stat","0x80,188,0,"},
  {"0x80.510","__channel_open"},
  {"0x80.361","bsdthread_terminate"},
  {"fchflags","0x80,35,0,"},
  {"shared_region_check_np","0x80,294,0,"},
  {"sem_unlink","0x80,270,0,"},
  {"getrlimit","0x80,194,0,"},
  {"_","0x80"},
  {"ffsctl","0x80,245,0,"},
  {"psynch_rw_rdlock","0x80,306,0,"},
  {"rename_ext","0x80,488,0,"},
  {"open_nocancel","0x80,398,0,"},
  {"memorystatus_get_level","0x80,453,0,"},
  {"sem_wait_nocancel","0x80,420,0,"},
  {"linkat","0x80,471,0,"},
  {"proc_disconnectx","0x80,448,0,"},
  {"0x80.359","auditctl"},
  {"0x80.358","setaudit_addr"},
  {"mkfifo","0x80,132,0,"},
  {"chmod_extended","0x80,282,0,"},
  {"lstat64","0x80,340,0,"},
  {"0x80.354","setauid"},
  {"__mac_get_fd","0x80,388,0,"},
  {"0x80.357","getaudit_addr"},
  {"delete","0x80,226,0,"},
  {"0x80.351","auditon"},
  {"0x80.350","audit"},
  {"0x80.353","getauid"},
  {"getattrlist","0x80,220,0,"},
  {"getpeername","0x80,31,0,"},
  {"audit_session_self","0x80,428,0,"},
  {"fstat64","0x80,339,0,"},
  {"__pthread_chdir","0x80,348,0,"},
  {"getaudit_addr","0x80,357,0,"},
  {"sem_init","0x80,275,0,"},
  {"setsockopt","0x80,105,0,"},
  {"audit_session_port","0x80,432,0,"},
  {"fcntl","0x80,92,0,"},
  {"swapon","0x80,85,0,"},
  {"open_extended","0x80,277,0,"},
  {"fstat","0x80,189,0,"},
  {"0x80.128","rename"},
  {"psynch_cvwait","0x80,305,0,"},
  {"getdirentries64","0x80,344,0,"},
  {"fs_snapshot","0x80,518,0,"},
  {"0x80.120","readv"},
  {"0x80.121","writev"},
  {"0x80.122","settimeofday"},
  {"access","0x80,33,0,"},
  {"sendmsg_nocancel","0x80,402,0,"},
  {"0x80.123","fchown"},
  {"0x80.124","fchmod"},
  {"0x80.126","setreuid"},
  {"0x80.127","setregid"},
  {"unlinkat","0x80,472,0,"},
  {"getegid","0x80,43,0,"},
  {"writev_nocancel","0x80,412,0,"},
  {"geteuid","0x80,25,0,"},
  {"utimes","0x80,138,0,"},
  {"symlinkat","0x80,474,0,"},
  {"__sigwait","0x80,330,0,"},
  {"0x80.373","ledger"},
  {"0x80.372","thread_selfid"},
  {"recvmsg_x","0x80,480,0,"},
  {"0x80.371","__old_semwait_signal_nocancel"},
  {"0x80.370","__old_semwait_signal"},
  {"psynch_mutexwait","0x80,301,0,"},
  {"mlock","0x80,203,0,"},
  {"__mac_execve","0x80,380,0,"},
  {"psynch_rw_unlock2","0x80,309,0,"},
  {"iopolicysys","0x80,322,0,"},
  {"__mac_get_file","0x80,382,0,"},
  {"getitimer","0x80,86,0,"},
  {"dup2","0x80,90,0,"},
  {"pwrite","0x80,154,0,"},
  {"aio_write","0x80,319,0,"},
  {"removexattr","0x80,238,0,"},
  {"readlinkat","0x80,473,0,"},
  {"vm_pressure_monitor","0x80,296,0,"},
  {"poll_nocancel","0x80,417,0,"},
  {"mkfifo_extended","0x80,291,0,"},
  {"lseek","0x80,199,0,"},
  {"__old_semwait_signal_nocancel","0x80,371,0,"},
  {"getauid","0x80,353,0,"},
  {"0x80.100","getpriority"},
  {"0x80.106","listen"},
  {"0x80.104","bind"},
  {"0x80.105","setsockopt"},
  {"guarded_kqueue_np","0x80,443,0,"},
  {"waitevent","0x80,232,0,"},
  {"gethostuuid","0x80,142,0,"},
  {"sfi_pidctl","0x80,457,0,"},
  {"close_nocancel","0x80,399,0,"},
  {"getpid","0x80,20,0,"},
  {"sem_post","0x80,273,0,"},
  {"mkdirat","0x80,475,0,"},
  {"__mac_set_proc","0x80,387,0,"},
  {"0x80.9","link"},
  {"guarded_write_np","0x80,485,0,"},
  {"0x80.139","futimes"},
  {"__nexus_register","0x80,504,0,"},
  {"0x80.138","utimes"},
  {"psynch_rw_downgrade","0x80,299,0,"},
  {"settimeofday","0x80,122,0,"},
  {"0x80.3","read"},
  {"0x80.2","fork"},
  {"0x80.1","exit"},
  {"__mac_getfsstat","0x80,426,0,"},
  {"stat_extended","0x80,279,0,"},
  {"workq_open","0x80,367,0,"},
  {"0x80.131","flock"},
  {"0x80.7","wait4"},
  {"proc_info","0x80,336,0,"},
  {"0x80.6","close"},
  {"0x80.133","sendto"},
  {"0x80.5","open"},
  {"0x80.132","mkfifo"},
  {"0x80.4","write"},
  {"fremovexattr","0x80,239,0,"},
  {"0x80.135","socketpair"},
  {"bind","0x80,104,0,"},
  {"0x80.134","shutdown"},
  {"0x80.137","rmdir"},
  {"0x80.136","mkdir"},
  {"aio_cancel","0x80,316,0,"},
  {"pwrite_nocancel","0x80,415,0,"},
  {"minherit","0x80,250,0,"},
  {"fstatfs64","0x80,346,0,"},
  {"readv","0x80,120,0,"},
  {"system_override","0x80,454,0,"},
  {"lstat","0x80,190,0,"},
  {"__disable_threadsignal","0x80,331,0,"},
  {"read_nocancel","0x80,396,0,"},
  {"getentropy","0x80,500,0,"},
  {"psynch_rw_yieldwrlock","0x80,298,0,"},
  {"0x80.169","csops"},
  {"persona","0x80,494,0,"},
  {"getgid","0x80,47,0,"},
  {"recvfrom","0x80,29,3,"},
  {"0x80.165","quotactl"},
  {"0x80.167","mount"},
  {"flock","0x80,131,0,"},
  {"getuid","0x80,24,0,"},
  {"__nexus_open","0x80,503,0,"},
  {"reboot","0x80,55,0,"},
  {"__channel_sync","0x80,512,0,"},
  {"getfsstat64","0x80,347,0,"},
  {"fchownat","0x80,468,0,"},
  {"fstat_extended","0x80,281,0,"},
  {"guarded_close_np","0x80,442,0,"},
  {"170","0x80,170,0,"},
  {"openat","0x80,463,0,"},
  {"0x80.118","getsockopt"},
  {"read","0x80,3,3,"},
  {"__nexus_set_opt","0x80,509,0,"},
  {"0x80.111","sigsuspend"},
  {"0x80.117","getrusage"},
  {"copyfile","0x80,227,0,"},
  {"0x80.116","gettimeofday"},
  {"fsetxattr","0x80,237,0,"},
  {"waitid_nocancel","0x80,416,0,"},
  {"__sysctl","0x80,202,0,"},
  {"sem_getvalue","0x80,274,0,"},
  {"netagent_trigger","0x80,490,0,"},
  {"initgroups","0x80,243,0,"},
  {"grab_pgo_data","0x80,493,0,"},
  {"vfs_purge","0x80,455,0,"},
  {"pread","0x80,153,0,"},
  {"0x80.147","setsid"},
  {"__semwait_signal","0x80,334,0,"},
  {"0x80.142","gethostuuid"},
  {"socketpair","0x80,135,0,"},
  {"pid_resume","0x80,434,0,"},
  {"0x80.140","adjtime"},
  {"ptrace","0x80,26,4,"},
  {"dup","0x80,41,0,"},
  {"mkdir","0x80,136,0,"},
  {"modwatch","0x80,233,0,"},
  {"fstat64_extended","0x80,343,0,"},
  {"__channel_open","0x80,510,0,"},
  {"writev","0x80,121,0,"},
  {"__sigwait_nocancel","0x80,422,0,"},
  {"close","0x80,6,1,"},
  {"statfs","0x80,157,0,"},
  {"__old_semwait_signal","0x80,370,0,"},
  {"0x80.170","170"},
  {"proc_rlimit_control","0x80,446,0,"},
  {"0x80.173","waitid"},
  {"renameat","0x80,465,0,"},
  {"ulock_wake","0x80,516,0,"},
  {"__mac_get_proc","0x80,386,0,"},
  {"__nexus_deregister","0x80,505,0,"},
  {"madvise","0x80,75,0,"},
  {"aio_fsync","0x80,313,0,"},
  {"getpgrp","0x80,81,0,"},
  {"aio_suspend_nocancel","0x80,421,0,"},
  {"pid_shutdown_sockets","0x80,436,0,"},
  {"poll","0x80,230,0,"},
  {"process_policy","0x80,323,0,"},
  {"sem_destroy","0x80,276,0,"},
  {"fsync_nocancel","0x80,408,0,"},
  {"getrusage","0x80,117,0,"},
  {"microstackshot","0x80,492,0,"},
  {"psynch_rw_longrdlock","0x80,297,0,"},
  {"0x80.281","fstat_extended"},
  {"0x80.280","lstat_extended"},
  {"0x80.283","fchmod_extended"},
  {"0x80.282","chmod_extended"},
  {"fclonefileat","0x80,517,0,"},
  {"0x80.285","settid"},
  {"0x80.284","access_extended"},
  {"0x80.287","setsgroups"},
  {"pread_nocancel","0x80,414,0,"},
  {"0x80.286","gettid"},
  {"0x80.289","setwgroups"},
  {"settid_with_pid","0x80,311,0,"},
  {"0x80.288","getsgroups"},
  {"0x80.159","unmount"},
  {"sem_wait","0x80,271,0,"},
  {"0x80.158","fstatfs"},
  {"0x80.157","statfs"},
  {"necp_open","0x80,501,0,"},
  {"flistxattr","0x80,241,0,"},
  {"setlogin","0x80,50,0,"},
  {"0x80.154","pwrite"},
  {"0x80.153","pread"},
  {"0x80.152","setprivexec"},
  {"__nexus_get_opt","0x80,508,0,"},
  {"0x80.151","getpgid"},
  {"necp_client_action","0x80,502,0,"},
  {"setattrlist","0x80,221,0,"},
  {"__mac_set_fd","0x80,389,0,"},
  {"placeholder for clonefile","0x80,462,0,"},
  {"__mac_get_lcid","0x80,391,0,"},
  {"chown","0x80,16,3,zii"},
  {"0x80.290","getwgroups"},
  {"__channel_get_info","0x80,511,0,"},
  {"0x80.291","mkfifo_extended"},
  {"mlockall","0x80,324,0,"},
  {"searchfs","0x80,225,0,"},
  {"0x80.292","mkdir_extended"},
  {"0x80.294","shared_region_check_np"},
  {"kill","0x80,37,0,"},
  {"__pthread_sigmask","0x80,329,0,"},
  {"recvmsg_nocancel","0x80,401,0,"},
  {"0x80.296","vm_pressure_monitor"},
  {"0x80.297","psynch_rw_longrdlock"},
  {"sem_open","0x80,268,0,"},
  {"0x80.298","psynch_rw_yieldwrlock"},
  {"watchevent","0x80,231,0,"},
  {"0x80.299","psynch_rw_downgrade"},
  {"rmdir","0x80,137,0,"},
  {"__channel_get_opt","0x80,513,0,"},
  {"settid","0x80,285,0,"},
  {"getxattr","0x80,234,0,"},
  {"getlcid","0x80,395,0,"},
  {"rename","0x80,128,0,"},
  {"0x80.83","setitimer"},
  {"0x80.82","setpgid"},
  {"0x80.81","getpgrp"},
  {"0x80.80","setgroups"},
  {"proc_peeloff","0x80,449,0,"},
  {"mount","0x80,167,0,"},
  {"0x80.86","getitimer"},
  {"0x80.85","swapon"},
  {"gettimeofday","0x80,116,0,"},
  {"0x80.89","getdtablesize"},
  {"__mac_set_lctx","0x80,393,0,"},
  {"sendto","0x80,133,0,"},
  {"guarded_open_np","0x80,441,0,"},
  {"coalition","0x80,458,0,"},
  {"kqueue","0x80,362,0,"},
  {"sync","0x80,36,0,"},
  {"futimes","0x80,139,0,"},
  {"0x80.92","fcntl"},
  {"0x80.93","select"},
  {"0x80.90","dup2"},
  {"mincore","0x80,78,0,"},
  {"0x80.96","setpriority"},
  {"munlock","0x80,204,0,"},
  {"0x80.487","guarded_writev_np"},
  {"aio_read","0x80,318,0,"},
  {"fileport_makefd","0x80,431,0,"},
  {"0x80.97","socket"},
  {"0x80.486","guarded_pwrite_np"},
  {"mknod","0x80,14,3,zii"},
  {"0x80.485","guarded_write_np"},
  {"0x80.95","fsync"},
  {"0x80.484","guarded_open_dprotected_np"},
  {"0x80.482","thread_selfusage"},
  {"0x80.98","connect"},
  {"0x80.481","sendmsg_x"},
  {"0x80.480","recvmsg_x"},
  {"audit_session_join","0x80,429,0,"},
  {"0x80.380","__mac_execve"},
  {"0x80.381","__mac_syscall"},
  {"issetugid","0x80,327,0,"},
  {"old __proc_suppress","0x80,445,0,"},
  {"__pthread_markcancel","0x80,332,0,"},
  {"ftruncate","0x80,201,0,"},
  {"0x80.382","__mac_get_file"},
  {"0x80.383","__mac_set_file"},
  {"0x80.489","mremap_encrypted"},
  {"proc_uuid_policy","0x80,452,0,"},
  {"0x80.384","__mac_get_link"},
  {"0x80.488","rename_ext"},
  {"0x80.385","__mac_set_link"},
  {"select_nocancel","0x80,407,0,"},
  {"0x80.386","__mac_get_proc"},
  {"0x80.387","__mac_set_proc"},
  {"0x80.388","__mac_get_fd"},
  {"0x80.389","__mac_set_fd"},
  {"ledger","0x80,373,0,"},
  {"open","0x80,5,3,"},
  {"setregid","0x80,127,0,"},
  {"sem_trywait","0x80,272,0,"},
  {"pid_suspend","0x80,433,0,"},
  {"fchmod_extended","0x80,283,0,"},
  {"0x80.494","persona"},
  {"setsid","0x80,147,0,"},
  {"0x80.492","microstackshot"},
  {"mremap_encrypted","0x80,489,0,"},
  {"vfork","0x80,66,0,"},
  {"access_extended","0x80,284,0,"},
  {"0x80.493","grab_pgo_data"},
  {"0x80.490","netagent_trigger"},
  {"0x80.491","stack_snapshot_with_config"},
  {"guarded_open_dprotected_np","0x80,484,0,"},
  {"stack_snapshot","0x80,365,0,"},
  {"getsid","0x80,310,0,"},
  {"munmap","0x80,73,0,"},
  {"readlink","0x80,58,0,"},
  {"__mac_set_link","0x80,385,0,"},
  {"__pthread_kill","0x80,328,0,"},
  {"0x80.499","work_interval_ctl"},
  {"ulock_wait","0x80,515,0,"},
  {"__mac_get_pid","0x80,390,0,"},
  {"kdebug_trace","0x80,180,0,"},
  {"coalition_info","0x80,459,0,"},
  {"guarded_pwrite_np","0x80,486,0,"},
  {"accept_nocancel","0x80,404,0,"},
  {"0x80.469","fstatat"},
  {"0x80.468","fchownat"},
  {"bsdthread_create","0x80,360,0,"},
  {"__mac_mount","0x80,424,0,"},
  {"stat64","0x80,338,0,"},
  {"undelete","0x80,205,0,"},
  {"kas_info","0x80,439,0,"},
  {"0x80.461","getattrlistbulk"},
  {"0x80.460","necp_match_policy"},
  {"0x80.463","openat"},
  {"0x80.462","placeholder for clonefile"},
  {"0x80.465","renameat"},
  {"0x80.464","openat_nocancel"},
  {"0x80.467","fchmodat"},
  {"getsockname","0x80,32,0,"},
  {"0x80.466","faccessat"},
  {"fgetxattr","0x80,235,0,"},
  {"sendmsg_x","0x80,481,0,"},
  {"fchmod","0x80,124,0,"},
  {"setgroups","0x80,80,0,"},
  {"__channel_set_opt","0x80,514,0,"},
  {"sigprocmask","0x80,48,0,"},
  {"faccessat","0x80,466,0,"},
  {"getfsstat","0x80,18,3,pii"},
  {"execve","0x80,59,0,"},
  {"0x80.478","bsdthread_ctl"},
  {"0x80.479","openbyid_np"},
  {"setauid","0x80,354,0,"},
  {"psynch_rw_unlock","0x80,308,0,"},
  {"0x80.470","fstatat64"},
  {"thread_selfusage","0x80,482,0,"},
  {"0x80.471","linkat"},
  {"0x80.472","unlinkat"},
  {"connect","0x80,98,0,"},
  {"fdatasync","0x80,187,0,"},
  {"0x80.391","__mac_get_lcid"},
  {"0x80.473","readlinkat"},
  {"0x80.390","__mac_get_pid"},
  {"0x80.474","symlinkat"},
  {"0x80.393","__mac_set_lctx"},
  {"0x80.475","mkdirat"},
  {"setlcid","0x80,394,0,"},
  {"0x80.392","__mac_get_lctx"},
  {"0x80.476","getattrlistat"},
  {"0x80.395","getlcid"},
  {"0x80.477","proc_trace_log"},
  {"0x80.394","setlcid"},
  {"terminate_with_payload","0x80,520,0,"},
  {"0x80.397","write_nocancel"},
  {"0x80.396","read_nocancel"},
  {"0x80.399","close_nocancel"},
  {"0x80.398","open_nocancel"},
  {"lio_listio","0x80,320,0,"},
  {"getdirentriesattr","0x80,222,0,"},
  {"__pthread_canceled","0x80,333,0,"},
  {"0x80.449","proc_peeloff"},
  {"wait4_nocancel","0x80,400,0,"},
  {"0x80.448","proc_disconnectx"},
  {"mmap","0x80,197,0,"},
  {"memorystatus_control","0x80,440,0,"},
  {"sigsuspend","0x80,111,0,"},
  {"shm_unlink","0x80,267,0,"},
  {"0x80.443","guarded_kqueue_np"},
  {"getattrlistbulk","0x80,461,0,"},
  {"0x80.442","guarded_close_np"},
  {"0x80.441","guarded_open_np"},
  {"getwgroups","0x80,290,0,"},
  {"0x80.440","memorystatus_control"},
  {"0x80.447","proc_connectx"},
  {"0x80.446","proc_rlimit_control"},
  {"getlogin","0x80,49,0,"},
  {"0x80.445","old __proc_suppress"},
  {"fstatat","0x80,469,0,"},
  {"0x80.444","change_fdguard_np"},
  {"kevent64","0x80,369,7,"},
  {"__nexus_create","0x80,506,0,"},
  {"necp_match_policy","0x80,460,0,"},
  {"seteuid","0x80,183,0,"},
  {"psynch_mutexdrop","0x80,302,0,"},
  {"sem_close","0x80,269,0,"},
  {"0x80.29","recvfrom"},
  {"0x80.28","sendmsg"},
  {"lstat_extended","0x80,280,0,"},
  {"proc_socket_delegate","0x80,450,0,"},
  {"revoke","0x80,56,0,"},
  {"shared_region_map_and_slide_np","0x80,438,0,"},
  {"0x80.458","coalition"},
  {"0x80.459","coalition_info"},
  {"0x80.20","getpid"},
  {"0x80.23","setuid"},
  {"unlink","0x80,10,1,z"},
  {"sigaltstack","0x80,53,0,"},
  {"0x80.452","proc_uuid_policy"},
  {"0x80.25","geteuid"},
  {"0x80.453","memorystatus_get_level"},
  {"sendto_nocancel","0x80,413,0,"},
  {"0x80.201","ftruncate"},
  {"0x80.24","getuid"},
  {"0x80.450","proc_socket_delegate"},
  {"0x80.200","truncate"},
  {"0x80.27","recvmsg"},
  {"openbyid_np","0x80,479,0,"},
  {"0x80.451","proc_telemetry"},
  {"0x80.203","mlock"},
  {"0x80.26","ptrace"},
  {"0x80.456","sfi_ctl"},
  {"0x80.202","__sysctl"},
  {"0x80.457","sfi_pidctl"},
  {"0x80.205","undelete"},
  {"bsdthread_register","0x80,366,0,"},
  {"0x80.454","system_override"},
  {"0x80.204","munlock"},
  {"0x80.455","vfs_purge"},
  {"getsockopt","0x80,118,0,"},
  {"__mac_get_lctx","0x80,392,0,"},
  {"getpriority","0x80,100,0,"},
  {"fork","0x80,2,0,"},
  {"recvfrom_nocancel","0x80,403,0,"},
  {"getattrlistat","0x80,476,0,"},
  {"setprivexec","0x80,152,0,"},
  {NULL, NULL}
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_darwin_arm_64_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_darwin_arm_64_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_darwin_arm_64(x,y) gperf_darwin_arm_64_hash(x)
const unsigned int gperf_darwin_arm_64_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_darwin_arm_64 = {
  .name = "darwin-arm-64",
  .get = &gperf_darwin_arm_64_get,
  .hash = &gperf_darwin_arm_64_hash,
  .foreach = &gperf_darwin_arm_64_foreach
};

#if MAIN
int main () {
 const char *s = ((char*(*)(char*))gperf_darwin_arm_64.get)("foo");
 printf ("%s\n", s);
}
#endif
