# 1 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
# 33 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#ifndef SQLITE3_H
#define SQLITE3_H 
#include <stdarg.h>




#ifdef __cplusplus
extern "C" {
#endif





#ifndef SQLITE_EXTERN
#define SQLITE_EXTERN extern
#endif
#ifndef SQLITE_API
#define SQLITE_API 
#endif
#ifndef SQLITE_CDECL
#define SQLITE_CDECL 
#endif
#ifndef SQLITE_APICALL
#define SQLITE_APICALL 
#endif
#ifndef SQLITE_STDCALL
#define SQLITE_STDCALL SQLITE_APICALL
#endif
#ifndef SQLITE_CALLBACK
#define SQLITE_CALLBACK 
#endif
#ifndef SQLITE_SYSAPI
#define SQLITE_SYSAPI 
#endif
# 83 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_DEPRECATED 
#define SQLITE_EXPERIMENTAL 




#ifdef SQLITE_VERSION
#undef SQLITE_VERSION
#endif
#ifdef SQLITE_VERSION_NUMBER
#undef SQLITE_VERSION_NUMBER
#endif
# 126 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_VERSION "3.30.1"
#define SQLITE_VERSION_NUMBER 3030001
#define SQLITE_SOURCE_ID "2019-10-10 20:19:45 18db032d058f1436ce3dea84081f4ee5a0f2259ad97301d43c426bc7f3df1b0b"
# 162 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API SQLITE_EXTERN const char sqlite3_version[];
SQLITE_API const char *sqlite3_libversion(void);
SQLITE_API const char *sqlite3_sourceid(void);
SQLITE_API int sqlite3_libversion_number(void);
# 189 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#ifndef SQLITE_OMIT_COMPILEOPTION_DIAGS
SQLITE_API int sqlite3_compileoption_used(const char *zOptName);
SQLITE_API const char *sqlite3_compileoption_get(int N);
#else
#define sqlite3_compileoption_used(X) 0
#define sqlite3_compileoption_get(X) ((void*)0)
#endif
# 233 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_threadsafe(void);
# 249 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3 sqlite3;
# 267 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#ifdef SQLITE_INT64_TYPE
  typedef SQLITE_INT64_TYPE sqlite_int64;
# ifdef SQLITE_UINT64_TYPE
    typedef SQLITE_UINT64_TYPE sqlite_uint64;
# else
    typedef unsigned SQLITE_INT64_TYPE sqlite_uint64;
# endif
#elif defined(_MSC_VER) || defined(__BORLANDC__)
  typedef __int64 sqlite_int64;
  typedef unsigned __int64 sqlite_uint64;
#else
  typedef long long int sqlite_int64;
  typedef unsigned long long int sqlite_uint64;
#endif
typedef sqlite_int64 sqlite3_int64;
typedef sqlite_uint64 sqlite3_uint64;





#ifdef SQLITE_OMIT_FLOATING_POINT
#define double sqlite3_int64
#endif
# 334 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_close(sqlite3*);
SQLITE_API int sqlite3_close_v2(sqlite3*);






typedef int (*sqlite3_callback)(void*,int,char**, char**);
# 406 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_exec(
  sqlite3*,
  const char *sql,
  int (*callback)(void*,int,char**,char**),
  void *,
  char **errmsg
);
# 425 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_OK 0

#define SQLITE_ERROR 1
#define SQLITE_INTERNAL 2
#define SQLITE_PERM 3
#define SQLITE_ABORT 4
#define SQLITE_BUSY 5
#define SQLITE_LOCKED 6
#define SQLITE_NOMEM 7
#define SQLITE_READONLY 8
#define SQLITE_INTERRUPT 9
#define SQLITE_IOERR 10
#define SQLITE_CORRUPT 11
#define SQLITE_NOTFOUND 12
#define SQLITE_FULL 13
#define SQLITE_CANTOPEN 14
#define SQLITE_PROTOCOL 15
#define SQLITE_EMPTY 16
#define SQLITE_SCHEMA 17
#define SQLITE_TOOBIG 18
#define SQLITE_CONSTRAINT 19
#define SQLITE_MISMATCH 20
#define SQLITE_MISUSE 21
#define SQLITE_NOLFS 22
#define SQLITE_AUTH 23
#define SQLITE_FORMAT 24
#define SQLITE_RANGE 25
#define SQLITE_NOTADB 26
#define SQLITE_NOTICE 27
#define SQLITE_WARNING 28
#define SQLITE_ROW 100
#define SQLITE_DONE 101
# 476 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_ERROR_MISSING_COLLSEQ (SQLITE_ERROR | (1<<8))
#define SQLITE_ERROR_RETRY (SQLITE_ERROR | (2<<8))
#define SQLITE_ERROR_SNAPSHOT (SQLITE_ERROR | (3<<8))
#define SQLITE_IOERR_READ (SQLITE_IOERR | (1<<8))
#define SQLITE_IOERR_SHORT_READ (SQLITE_IOERR | (2<<8))
#define SQLITE_IOERR_WRITE (SQLITE_IOERR | (3<<8))
#define SQLITE_IOERR_FSYNC (SQLITE_IOERR | (4<<8))
#define SQLITE_IOERR_DIR_FSYNC (SQLITE_IOERR | (5<<8))
#define SQLITE_IOERR_TRUNCATE (SQLITE_IOERR | (6<<8))
#define SQLITE_IOERR_FSTAT (SQLITE_IOERR | (7<<8))
#define SQLITE_IOERR_UNLOCK (SQLITE_IOERR | (8<<8))
#define SQLITE_IOERR_RDLOCK (SQLITE_IOERR | (9<<8))
#define SQLITE_IOERR_DELETE (SQLITE_IOERR | (10<<8))
#define SQLITE_IOERR_BLOCKED (SQLITE_IOERR | (11<<8))
#define SQLITE_IOERR_NOMEM (SQLITE_IOERR | (12<<8))
#define SQLITE_IOERR_ACCESS (SQLITE_IOERR | (13<<8))
#define SQLITE_IOERR_CHECKRESERVEDLOCK (SQLITE_IOERR | (14<<8))
#define SQLITE_IOERR_LOCK (SQLITE_IOERR | (15<<8))
#define SQLITE_IOERR_CLOSE (SQLITE_IOERR | (16<<8))
#define SQLITE_IOERR_DIR_CLOSE (SQLITE_IOERR | (17<<8))
#define SQLITE_IOERR_SHMOPEN (SQLITE_IOERR | (18<<8))
#define SQLITE_IOERR_SHMSIZE (SQLITE_IOERR | (19<<8))
#define SQLITE_IOERR_SHMLOCK (SQLITE_IOERR | (20<<8))
#define SQLITE_IOERR_SHMMAP (SQLITE_IOERR | (21<<8))
#define SQLITE_IOERR_SEEK (SQLITE_IOERR | (22<<8))
#define SQLITE_IOERR_DELETE_NOENT (SQLITE_IOERR | (23<<8))
#define SQLITE_IOERR_MMAP (SQLITE_IOERR | (24<<8))
#define SQLITE_IOERR_GETTEMPPATH (SQLITE_IOERR | (25<<8))
#define SQLITE_IOERR_CONVPATH (SQLITE_IOERR | (26<<8))
#define SQLITE_IOERR_VNODE (SQLITE_IOERR | (27<<8))
#define SQLITE_IOERR_AUTH (SQLITE_IOERR | (28<<8))
#define SQLITE_IOERR_BEGIN_ATOMIC (SQLITE_IOERR | (29<<8))
#define SQLITE_IOERR_COMMIT_ATOMIC (SQLITE_IOERR | (30<<8))
#define SQLITE_IOERR_ROLLBACK_ATOMIC (SQLITE_IOERR | (31<<8))
#define SQLITE_LOCKED_SHAREDCACHE (SQLITE_LOCKED | (1<<8))
#define SQLITE_LOCKED_VTAB (SQLITE_LOCKED | (2<<8))
#define SQLITE_BUSY_RECOVERY (SQLITE_BUSY | (1<<8))
#define SQLITE_BUSY_SNAPSHOT (SQLITE_BUSY | (2<<8))
#define SQLITE_CANTOPEN_NOTEMPDIR (SQLITE_CANTOPEN | (1<<8))
#define SQLITE_CANTOPEN_ISDIR (SQLITE_CANTOPEN | (2<<8))
#define SQLITE_CANTOPEN_FULLPATH (SQLITE_CANTOPEN | (3<<8))
#define SQLITE_CANTOPEN_CONVPATH (SQLITE_CANTOPEN | (4<<8))
#define SQLITE_CANTOPEN_DIRTYWAL (SQLITE_CANTOPEN | (5<<8))
#define SQLITE_CORRUPT_VTAB (SQLITE_CORRUPT | (1<<8))
#define SQLITE_CORRUPT_SEQUENCE (SQLITE_CORRUPT | (2<<8))
#define SQLITE_READONLY_RECOVERY (SQLITE_READONLY | (1<<8))
#define SQLITE_READONLY_CANTLOCK (SQLITE_READONLY | (2<<8))
#define SQLITE_READONLY_ROLLBACK (SQLITE_READONLY | (3<<8))
#define SQLITE_READONLY_DBMOVED (SQLITE_READONLY | (4<<8))
#define SQLITE_READONLY_CANTINIT (SQLITE_READONLY | (5<<8))
#define SQLITE_READONLY_DIRECTORY (SQLITE_READONLY | (6<<8))
#define SQLITE_ABORT_ROLLBACK (SQLITE_ABORT | (2<<8))
#define SQLITE_CONSTRAINT_CHECK (SQLITE_CONSTRAINT | (1<<8))
#define SQLITE_CONSTRAINT_COMMITHOOK (SQLITE_CONSTRAINT | (2<<8))
#define SQLITE_CONSTRAINT_FOREIGNKEY (SQLITE_CONSTRAINT | (3<<8))
#define SQLITE_CONSTRAINT_FUNCTION (SQLITE_CONSTRAINT | (4<<8))
#define SQLITE_CONSTRAINT_NOTNULL (SQLITE_CONSTRAINT | (5<<8))
#define SQLITE_CONSTRAINT_PRIMARYKEY (SQLITE_CONSTRAINT | (6<<8))
#define SQLITE_CONSTRAINT_TRIGGER (SQLITE_CONSTRAINT | (7<<8))
#define SQLITE_CONSTRAINT_UNIQUE (SQLITE_CONSTRAINT | (8<<8))
#define SQLITE_CONSTRAINT_VTAB (SQLITE_CONSTRAINT | (9<<8))
#define SQLITE_CONSTRAINT_ROWID (SQLITE_CONSTRAINT |(10<<8))
#define SQLITE_NOTICE_RECOVER_WAL (SQLITE_NOTICE | (1<<8))
#define SQLITE_NOTICE_RECOVER_ROLLBACK (SQLITE_NOTICE | (2<<8))
#define SQLITE_WARNING_AUTOINDEX (SQLITE_WARNING | (1<<8))
#define SQLITE_AUTH_USER (SQLITE_AUTH | (1<<8))
#define SQLITE_OK_LOAD_PERMANENTLY (SQLITE_OK | (1<<8))
# 551 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_OPEN_READONLY 0x00000001
#define SQLITE_OPEN_READWRITE 0x00000002
#define SQLITE_OPEN_CREATE 0x00000004
#define SQLITE_OPEN_DELETEONCLOSE 0x00000008
#define SQLITE_OPEN_EXCLUSIVE 0x00000010
#define SQLITE_OPEN_AUTOPROXY 0x00000020
#define SQLITE_OPEN_URI 0x00000040
#define SQLITE_OPEN_MEMORY 0x00000080
#define SQLITE_OPEN_MAIN_DB 0x00000100
#define SQLITE_OPEN_TEMP_DB 0x00000200
#define SQLITE_OPEN_TRANSIENT_DB 0x00000400
#define SQLITE_OPEN_MAIN_JOURNAL 0x00000800
#define SQLITE_OPEN_TEMP_JOURNAL 0x00001000
#define SQLITE_OPEN_SUBJOURNAL 0x00002000
#define SQLITE_OPEN_MASTER_JOURNAL 0x00004000
#define SQLITE_OPEN_NOMUTEX 0x00008000
#define SQLITE_OPEN_FULLMUTEX 0x00010000
#define SQLITE_OPEN_SHAREDCACHE 0x00020000
#define SQLITE_OPEN_PRIVATECACHE 0x00040000
#define SQLITE_OPEN_WAL 0x00080000
# 607 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_IOCAP_ATOMIC 0x00000001
#define SQLITE_IOCAP_ATOMIC512 0x00000002
#define SQLITE_IOCAP_ATOMIC1K 0x00000004
#define SQLITE_IOCAP_ATOMIC2K 0x00000008
#define SQLITE_IOCAP_ATOMIC4K 0x00000010
#define SQLITE_IOCAP_ATOMIC8K 0x00000020
#define SQLITE_IOCAP_ATOMIC16K 0x00000040
#define SQLITE_IOCAP_ATOMIC32K 0x00000080
#define SQLITE_IOCAP_ATOMIC64K 0x00000100
#define SQLITE_IOCAP_SAFE_APPEND 0x00000200
#define SQLITE_IOCAP_SEQUENTIAL 0x00000400
#define SQLITE_IOCAP_UNDELETABLE_WHEN_OPEN 0x00000800
#define SQLITE_IOCAP_POWERSAFE_OVERWRITE 0x00001000
#define SQLITE_IOCAP_IMMUTABLE 0x00002000
#define SQLITE_IOCAP_BATCH_ATOMIC 0x00004000
# 630 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_LOCK_NONE 0
#define SQLITE_LOCK_SHARED 1
#define SQLITE_LOCK_RESERVED 2
#define SQLITE_LOCK_PENDING 3
#define SQLITE_LOCK_EXCLUSIVE 4
# 662 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_SYNC_NORMAL 0x00002
#define SQLITE_SYNC_FULL 0x00003
#define SQLITE_SYNC_DATAONLY 0x00010
# 677 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_file sqlite3_file;
struct sqlite3_file {
  const struct sqlite3_io_methods *pMethods;
};
# 776 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_io_methods sqlite3_io_methods;
struct sqlite3_io_methods {
  int iVersion;
  int (*xClose)(sqlite3_file*);
  int (*xRead)(sqlite3_file*, void*, int iAmt, sqlite3_int64 iOfst);
  int (*xWrite)(sqlite3_file*, const void*, int iAmt, sqlite3_int64 iOfst);
  int (*xTruncate)(sqlite3_file*, sqlite3_int64 size);
  int (*xSync)(sqlite3_file*, int flags);
  int (*xFileSize)(sqlite3_file*, sqlite3_int64 *pSize);
  int (*xLock)(sqlite3_file*, int);
  int (*xUnlock)(sqlite3_file*, int);
  int (*xCheckReservedLock)(sqlite3_file*, int *pResOut);
  int (*xFileControl)(sqlite3_file*, int op, void *pArg);
  int (*xSectorSize)(sqlite3_file*);
  int (*xDeviceCharacteristics)(sqlite3_file*);

  int (*xShmMap)(sqlite3_file*, int iPg, int pgsz, int, void volatile**);
  int (*xShmLock)(sqlite3_file*, int offset, int n, int flags);
  void (*xShmBarrier)(sqlite3_file*);
  int (*xShmUnmap)(sqlite3_file*, int deleteFlag);

  int (*xFetch)(sqlite3_file*, sqlite3_int64 iOfst, int iAmt, void **pp);
  int (*xUnfetch)(sqlite3_file*, sqlite3_int64 iOfst, void *p);


};
# 1112 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_FCNTL_LOCKSTATE 1
#define SQLITE_FCNTL_GET_LOCKPROXYFILE 2
#define SQLITE_FCNTL_SET_LOCKPROXYFILE 3
#define SQLITE_FCNTL_LAST_ERRNO 4
#define SQLITE_FCNTL_SIZE_HINT 5
#define SQLITE_FCNTL_CHUNK_SIZE 6
#define SQLITE_FCNTL_FILE_POINTER 7
#define SQLITE_FCNTL_SYNC_OMITTED 8
#define SQLITE_FCNTL_WIN32_AV_RETRY 9
#define SQLITE_FCNTL_PERSIST_WAL 10
#define SQLITE_FCNTL_OVERWRITE 11
#define SQLITE_FCNTL_VFSNAME 12
#define SQLITE_FCNTL_POWERSAFE_OVERWRITE 13
#define SQLITE_FCNTL_PRAGMA 14
#define SQLITE_FCNTL_BUSYHANDLER 15
#define SQLITE_FCNTL_TEMPFILENAME 16
#define SQLITE_FCNTL_MMAP_SIZE 18
#define SQLITE_FCNTL_TRACE 19
#define SQLITE_FCNTL_HAS_MOVED 20
#define SQLITE_FCNTL_SYNC 21
#define SQLITE_FCNTL_COMMIT_PHASETWO 22
#define SQLITE_FCNTL_WIN32_SET_HANDLE 23
#define SQLITE_FCNTL_WAL_BLOCK 24
#define SQLITE_FCNTL_ZIPVFS 25
#define SQLITE_FCNTL_RBU 26
#define SQLITE_FCNTL_VFS_POINTER 27
#define SQLITE_FCNTL_JOURNAL_POINTER 28
#define SQLITE_FCNTL_WIN32_GET_HANDLE 29
#define SQLITE_FCNTL_PDB 30
#define SQLITE_FCNTL_BEGIN_ATOMIC_WRITE 31
#define SQLITE_FCNTL_COMMIT_ATOMIC_WRITE 32
#define SQLITE_FCNTL_ROLLBACK_ATOMIC_WRITE 33
#define SQLITE_FCNTL_LOCK_TIMEOUT 34
#define SQLITE_FCNTL_DATA_VERSION 35
#define SQLITE_FCNTL_SIZE_LIMIT 36


#define SQLITE_GET_LOCKPROXYFILE SQLITE_FCNTL_GET_LOCKPROXYFILE
#define SQLITE_SET_LOCKPROXYFILE SQLITE_FCNTL_SET_LOCKPROXYFILE
#define SQLITE_LAST_ERRNO SQLITE_FCNTL_LAST_ERRNO
# 1164 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_mutex sqlite3_mutex;
# 1174 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_api_routines sqlite3_api_routines;
# 1345 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_vfs sqlite3_vfs;
typedef void (*sqlite3_syscall_ptr)(void);
struct sqlite3_vfs {
  int iVersion;
  int szOsFile;
  int mxPathname;
  sqlite3_vfs *pNext;
  const char *zName;
  void *pAppData;
  int (*xOpen)(sqlite3_vfs*, const char *zName, sqlite3_file*,
               int flags, int *pOutFlags);
  int (*xDelete)(sqlite3_vfs*, const char *zName, int syncDir);
  int (*xAccess)(sqlite3_vfs*, const char *zName, int flags, int *pResOut);
  int (*xFullPathname)(sqlite3_vfs*, const char *zName, int nOut, char *zOut);
  void *(*xDlOpen)(sqlite3_vfs*, const char *zFilename);
  void (*xDlError)(sqlite3_vfs*, int nByte, char *zErrMsg);
  void (*(*xDlSym)(sqlite3_vfs*,void*, const char *zSymbol))(void);
  void (*xDlClose)(sqlite3_vfs*, void*);
  int (*xRandomness)(sqlite3_vfs*, int nByte, char *zOut);
  int (*xSleep)(sqlite3_vfs*, int microseconds);
  int (*xCurrentTime)(sqlite3_vfs*, double*);
  int (*xGetLastError)(sqlite3_vfs*, int, char *);




  int (*xCurrentTimeInt64)(sqlite3_vfs*, sqlite3_int64*);




  int (*xSetSystemCall)(sqlite3_vfs*, const char *zName, sqlite3_syscall_ptr);
  sqlite3_syscall_ptr (*xGetSystemCall)(sqlite3_vfs*, const char *zName);
  const char *(*xNextSystemCall)(sqlite3_vfs*, const char *zName);





};
# 1406 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_ACCESS_EXISTS 0
#define SQLITE_ACCESS_READWRITE 1
#define SQLITE_ACCESS_READ 2
# 1432 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_SHM_UNLOCK 1
#define SQLITE_SHM_LOCK 2
#define SQLITE_SHM_SHARED 4
#define SQLITE_SHM_EXCLUSIVE 8
# 1445 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_SHM_NLOCK 8
# 1523 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_initialize(void);
SQLITE_API int sqlite3_shutdown(void);
SQLITE_API int sqlite3_os_init(void);
SQLITE_API int sqlite3_os_end(void);
# 1559 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_config(int, ...);
# 1578 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_db_config(sqlite3*, int op, ...);
# 1643 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_mem_methods sqlite3_mem_methods;
struct sqlite3_mem_methods {
  void *(*xMalloc)(int);
  void (*xFree)(void*);
  void *(*xRealloc)(void*,int);
  int (*xSize)(void*);
  int (*xRoundup)(int);
  int (*xInit)(void*);
  void (*xShutdown)(void*);
  void *pAppData;
};
# 2007 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_CONFIG_SINGLETHREAD 1
#define SQLITE_CONFIG_MULTITHREAD 2
#define SQLITE_CONFIG_SERIALIZED 3
#define SQLITE_CONFIG_MALLOC 4
#define SQLITE_CONFIG_GETMALLOC 5
#define SQLITE_CONFIG_SCRATCH 6
#define SQLITE_CONFIG_PAGECACHE 7
#define SQLITE_CONFIG_HEAP 8
#define SQLITE_CONFIG_MEMSTATUS 9
#define SQLITE_CONFIG_MUTEX 10
#define SQLITE_CONFIG_GETMUTEX 11

#define SQLITE_CONFIG_LOOKASIDE 13
#define SQLITE_CONFIG_PCACHE 14
#define SQLITE_CONFIG_GETPCACHE 15
#define SQLITE_CONFIG_LOG 16
#define SQLITE_CONFIG_URI 17
#define SQLITE_CONFIG_PCACHE2 18
#define SQLITE_CONFIG_GETPCACHE2 19
#define SQLITE_CONFIG_COVERING_INDEX_SCAN 20
#define SQLITE_CONFIG_SQLLOG 21
#define SQLITE_CONFIG_MMAP_SIZE 22
#define SQLITE_CONFIG_WIN32_HEAPSIZE 23
#define SQLITE_CONFIG_PCACHE_HDRSZ 24
#define SQLITE_CONFIG_PMASZ 25
#define SQLITE_CONFIG_STMTJRNL_SPILL 26
#define SQLITE_CONFIG_SMALL_MALLOC 27
#define SQLITE_CONFIG_SORTERREF_SIZE 28
#define SQLITE_CONFIG_MEMDB_MAXSIZE 29
# 2264 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_DBCONFIG_MAINDBNAME 1000
#define SQLITE_DBCONFIG_LOOKASIDE 1001
#define SQLITE_DBCONFIG_ENABLE_FKEY 1002
#define SQLITE_DBCONFIG_ENABLE_TRIGGER 1003
#define SQLITE_DBCONFIG_ENABLE_FTS3_TOKENIZER 1004
#define SQLITE_DBCONFIG_ENABLE_LOAD_EXTENSION 1005
#define SQLITE_DBCONFIG_NO_CKPT_ON_CLOSE 1006
#define SQLITE_DBCONFIG_ENABLE_QPSG 1007
#define SQLITE_DBCONFIG_TRIGGER_EQP 1008
#define SQLITE_DBCONFIG_RESET_DATABASE 1009
#define SQLITE_DBCONFIG_DEFENSIVE 1010
#define SQLITE_DBCONFIG_WRITABLE_SCHEMA 1011
#define SQLITE_DBCONFIG_LEGACY_ALTER_TABLE 1012
#define SQLITE_DBCONFIG_DQS_DML 1013
#define SQLITE_DBCONFIG_DQS_DDL 1014
#define SQLITE_DBCONFIG_ENABLE_VIEW 1015
#define SQLITE_DBCONFIG_MAX 1015
# 2290 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_extended_result_codes(sqlite3*, int onoff);
# 2352 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API sqlite3_int64 sqlite3_last_insert_rowid(sqlite3*);
# 2362 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API void sqlite3_set_last_insert_rowid(sqlite3*,sqlite3_int64);
# 2420 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_changes(sqlite3*);
# 2457 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_total_changes(sqlite3*);
# 2494 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API void sqlite3_interrupt(sqlite3*);
# 2529 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_complete(const char *sql);
SQLITE_API int sqlite3_complete16(const void *sql);
# 2591 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_busy_handler(sqlite3*,int(*)(void*,int),void*);
# 2614 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_busy_timeout(sqlite3*, int ms);
# 2689 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_get_table(
  sqlite3 *db,
  const char *zSql,
  char ***pazResult,
  int *pnRow,
  int *pnColumn,
  char **pzErrmsg
);
SQLITE_API void sqlite3_free_table(char **result);
# 2739 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API char *sqlite3_mprintf(const char*,...);
SQLITE_API char *sqlite3_vmprintf(const char*, va_list);
SQLITE_API char *sqlite3_snprintf(int,char*,const char*, ...);
SQLITE_API char *sqlite3_vsnprintf(int,char*,const char*, va_list);
# 2832 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API void *sqlite3_malloc(int);
SQLITE_API void *sqlite3_malloc64(sqlite3_uint64);
SQLITE_API void *sqlite3_realloc(void*, int);
SQLITE_API void *sqlite3_realloc64(void*, sqlite3_uint64);
SQLITE_API void sqlite3_free(void*);
SQLITE_API sqlite3_uint64 sqlite3_msize(void*);
# 2862 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API sqlite3_int64 sqlite3_memory_used(void);
SQLITE_API sqlite3_int64 sqlite3_memory_highwater(int resetFlag);
# 2886 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API void sqlite3_randomness(int N, void *P);
# 2977 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_set_authorizer(
  sqlite3*,
  int (*xAuth)(void*,int,const char*,const char*,const char*,const char*),
  void *pUserData
);
# 2995 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_DENY 1
#define SQLITE_IGNORE 2
# 3018 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_CREATE_INDEX 1
#define SQLITE_CREATE_TABLE 2
#define SQLITE_CREATE_TEMP_INDEX 3
#define SQLITE_CREATE_TEMP_TABLE 4
#define SQLITE_CREATE_TEMP_TRIGGER 5
#define SQLITE_CREATE_TEMP_VIEW 6
#define SQLITE_CREATE_TRIGGER 7
#define SQLITE_CREATE_VIEW 8
#define SQLITE_DELETE 9
#define SQLITE_DROP_INDEX 10
#define SQLITE_DROP_TABLE 11
#define SQLITE_DROP_TEMP_INDEX 12
#define SQLITE_DROP_TEMP_TABLE 13
#define SQLITE_DROP_TEMP_TRIGGER 14
#define SQLITE_DROP_TEMP_VIEW 15
#define SQLITE_DROP_TRIGGER 16
#define SQLITE_DROP_VIEW 17
#define SQLITE_INSERT 18
#define SQLITE_PRAGMA 19
#define SQLITE_READ 20
#define SQLITE_SELECT 21
#define SQLITE_TRANSACTION 22
#define SQLITE_UPDATE 23
#define SQLITE_ATTACH 24
#define SQLITE_DETACH 25
#define SQLITE_ALTER_TABLE 26
#define SQLITE_REINDEX 27
#define SQLITE_ANALYZE 28
#define SQLITE_CREATE_VTABLE 29
#define SQLITE_DROP_VTABLE 30
#define SQLITE_FUNCTION 31
#define SQLITE_SAVEPOINT 32
#define SQLITE_COPY 0
#define SQLITE_RECURSIVE 33
# 3085 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API SQLITE_DEPRECATED void *sqlite3_trace(sqlite3*,
   void(*xTrace)(void*,const char*), void*);
SQLITE_API SQLITE_DEPRECATED void *sqlite3_profile(sqlite3*,
   void(*xProfile)(void*,const char*,sqlite3_uint64), void*);
# 3142 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_TRACE_STMT 0x01
#define SQLITE_TRACE_PROFILE 0x02
#define SQLITE_TRACE_ROW 0x04
#define SQLITE_TRACE_CLOSE 0x08
# 3176 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_trace_v2(
  sqlite3*,
  unsigned uMask,
  int(*xCallback)(unsigned,void*,void*,void*),
  void *pCtx
);
# 3215 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API void sqlite3_progress_handler(sqlite3*, int, int(*)(void*), void*);
# 3444 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_open(
  const char *filename,
  sqlite3 **ppDb
);
SQLITE_API int sqlite3_open16(
  const void *filename,
  sqlite3 **ppDb
);
SQLITE_API int sqlite3_open_v2(
  const char *filename,
  sqlite3 **ppDb,
  int flags,
  const char *zVfs
);
# 3500 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API const char *sqlite3_uri_parameter(const char *zFilename, const char *zParam);
SQLITE_API int sqlite3_uri_boolean(const char *zFile, const char *zParam, int bDefault);
SQLITE_API sqlite3_int64 sqlite3_uri_int64(const char*, const char*, sqlite3_int64);
# 3557 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_errcode(sqlite3 *db);
SQLITE_API int sqlite3_extended_errcode(sqlite3 *db);
SQLITE_API const char *sqlite3_errmsg(sqlite3*);
SQLITE_API const void *sqlite3_errmsg16(sqlite3*);
SQLITE_API const char *sqlite3_errstr(int);
# 3587 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_stmt sqlite3_stmt;
# 3629 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_limit(sqlite3*, int id, int newVal);
# 3687 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_LIMIT_LENGTH 0
#define SQLITE_LIMIT_SQL_LENGTH 1
#define SQLITE_LIMIT_COLUMN 2
#define SQLITE_LIMIT_EXPR_DEPTH 3
#define SQLITE_LIMIT_COMPOUND_SELECT 4
#define SQLITE_LIMIT_VDBE_OP 5
#define SQLITE_LIMIT_FUNCTION_ARG 6
#define SQLITE_LIMIT_ATTACHED 7
#define SQLITE_LIMIT_LIKE_PATTERN_LENGTH 8
#define SQLITE_LIMIT_VARIABLE_NUMBER 9
#define SQLITE_LIMIT_TRIGGER_DEPTH 10
#define SQLITE_LIMIT_WORKER_THREADS 11
# 3735 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_PREPARE_PERSISTENT 0x01
#define SQLITE_PREPARE_NORMALIZE 0x02
#define SQLITE_PREPARE_NO_VTAB 0x04
# 3839 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_prepare(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);
SQLITE_API int sqlite3_prepare_v2(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);
SQLITE_API int sqlite3_prepare_v3(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  unsigned int prepFlags,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);
SQLITE_API int sqlite3_prepare16(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
SQLITE_API int sqlite3_prepare16_v2(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
SQLITE_API int sqlite3_prepare16_v3(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  unsigned int prepFlags,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
# 3922 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API const char *sqlite3_sql(sqlite3_stmt *pStmt);
SQLITE_API char *sqlite3_expanded_sql(sqlite3_stmt *pStmt);
SQLITE_API const char *sqlite3_normalized_sql(sqlite3_stmt *pStmt);
# 3960 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_stmt_readonly(sqlite3_stmt *pStmt);
# 3972 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_stmt_isexplain(sqlite3_stmt *pStmt);
# 3993 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_stmt_busy(sqlite3_stmt*);
# 4035 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_value sqlite3_value;
# 4049 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_context sqlite3_context;
# 4169 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_bind_blob(sqlite3_stmt*, int, const void*, int n, void(*)(void*));
SQLITE_API int sqlite3_bind_blob64(sqlite3_stmt*, int, const void*, sqlite3_uint64,
                        void(*)(void*));
SQLITE_API int sqlite3_bind_double(sqlite3_stmt*, int, double);
SQLITE_API int sqlite3_bind_int(sqlite3_stmt*, int, int);
SQLITE_API int sqlite3_bind_int64(sqlite3_stmt*, int, sqlite3_int64);
SQLITE_API int sqlite3_bind_null(sqlite3_stmt*, int);
SQLITE_API int sqlite3_bind_text(sqlite3_stmt*,int,const char*,int,void(*)(void*));
SQLITE_API int sqlite3_bind_text16(sqlite3_stmt*, int, const void*, int, void(*)(void*));
SQLITE_API int sqlite3_bind_text64(sqlite3_stmt*, int, const char*, sqlite3_uint64,
                         void(*)(void*), unsigned char encoding);
SQLITE_API int sqlite3_bind_value(sqlite3_stmt*, int, const sqlite3_value*);
SQLITE_API int sqlite3_bind_pointer(sqlite3_stmt*, int, void*, const char*,void(*)(void*));
SQLITE_API int sqlite3_bind_zeroblob(sqlite3_stmt*, int, int n);
SQLITE_API int sqlite3_bind_zeroblob64(sqlite3_stmt*, int, sqlite3_uint64);
# 4204 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_bind_parameter_count(sqlite3_stmt*);
# 4232 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API const char *sqlite3_bind_parameter_name(sqlite3_stmt*, int);
# 4250 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_bind_parameter_index(sqlite3_stmt*, const char *zName);
# 4260 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_clear_bindings(sqlite3_stmt*);
# 4276 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_column_count(sqlite3_stmt *pStmt);
# 4305 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API const char *sqlite3_column_name(sqlite3_stmt*, int N);
SQLITE_API const void *sqlite3_column_name16(sqlite3_stmt*, int N);
# 4354 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API const char *sqlite3_column_database_name(sqlite3_stmt*,int);
SQLITE_API const void *sqlite3_column_database_name16(sqlite3_stmt*,int);
SQLITE_API const char *sqlite3_column_table_name(sqlite3_stmt*,int);
SQLITE_API const void *sqlite3_column_table_name16(sqlite3_stmt*,int);
SQLITE_API const char *sqlite3_column_origin_name(sqlite3_stmt*,int);
SQLITE_API const void *sqlite3_column_origin_name16(sqlite3_stmt*,int);
# 4391 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API const char *sqlite3_column_decltype(sqlite3_stmt*,int);
SQLITE_API const void *sqlite3_column_decltype16(sqlite3_stmt*,int);
# 4476 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_step(sqlite3_stmt*);
# 4497 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_data_count(sqlite3_stmt *pStmt);
# 4520 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_INTEGER 1
#define SQLITE_FLOAT 2
#define SQLITE_BLOB 4
#define SQLITE_NULL 5
#ifdef SQLITE_TEXT
#undef SQLITE_TEXT
#else
#define SQLITE_TEXT 3
#endif
#define SQLITE3_TEXT 3
# 4740 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API const void *sqlite3_column_blob(sqlite3_stmt*, int iCol);
SQLITE_API double sqlite3_column_double(sqlite3_stmt*, int iCol);
SQLITE_API int sqlite3_column_int(sqlite3_stmt*, int iCol);
SQLITE_API sqlite3_int64 sqlite3_column_int64(sqlite3_stmt*, int iCol);
SQLITE_API const unsigned char *sqlite3_column_text(sqlite3_stmt*, int iCol);
SQLITE_API const void *sqlite3_column_text16(sqlite3_stmt*, int iCol);
SQLITE_API sqlite3_value *sqlite3_column_value(sqlite3_stmt*, int iCol);
SQLITE_API int sqlite3_column_bytes(sqlite3_stmt*, int iCol);
SQLITE_API int sqlite3_column_bytes16(sqlite3_stmt*, int iCol);
SQLITE_API int sqlite3_column_type(sqlite3_stmt*, int iCol);
# 4777 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_finalize(sqlite3_stmt *pStmt);
# 4804 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_reset(sqlite3_stmt *pStmt);
# 4922 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_create_function(
  sqlite3 *db,
  const char *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*)
);
SQLITE_API int sqlite3_create_function16(
  sqlite3 *db,
  const void *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*)
);
SQLITE_API int sqlite3_create_function_v2(
  sqlite3 *db,
  const char *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*),
  void(*xDestroy)(void*)
);
SQLITE_API int sqlite3_create_window_function(
  sqlite3 *db,
  const char *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*),
  void (*xValue)(sqlite3_context*),
  void (*xInverse)(sqlite3_context*,int,sqlite3_value**),
  void(*xDestroy)(void*)
);







#define SQLITE_UTF8 1
#define SQLITE_UTF16LE 2
#define SQLITE_UTF16BE 3
#define SQLITE_UTF16 4
#define SQLITE_ANY 5
#define SQLITE_UTF16_ALIGNED 8
# 5007 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_DETERMINISTIC 0x000000800
#define SQLITE_DIRECTONLY 0x000080000
#define SQLITE_SUBTYPE 0x000100000
# 5021 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#ifndef SQLITE_OMIT_DEPRECATED
SQLITE_API SQLITE_DEPRECATED int sqlite3_aggregate_count(sqlite3_context*);
SQLITE_API SQLITE_DEPRECATED int sqlite3_expired(sqlite3_stmt*);
SQLITE_API SQLITE_DEPRECATED int sqlite3_transfer_bindings(sqlite3_stmt*, sqlite3_stmt*);
SQLITE_API SQLITE_DEPRECATED int sqlite3_global_recover(void);
SQLITE_API SQLITE_DEPRECATED void sqlite3_thread_cleanup(void);
SQLITE_API SQLITE_DEPRECATED int sqlite3_memory_alarm(void(*)(void*,sqlite3_int64,int),
                      void*,sqlite3_int64);
#endif
# 5159 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API const void *sqlite3_value_blob(sqlite3_value*);
SQLITE_API double sqlite3_value_double(sqlite3_value*);
SQLITE_API int sqlite3_value_int(sqlite3_value*);
SQLITE_API sqlite3_int64 sqlite3_value_int64(sqlite3_value*);
SQLITE_API void *sqlite3_value_pointer(sqlite3_value*, const char*);
SQLITE_API const unsigned char *sqlite3_value_text(sqlite3_value*);
SQLITE_API const void *sqlite3_value_text16(sqlite3_value*);
SQLITE_API const void *sqlite3_value_text16le(sqlite3_value*);
SQLITE_API const void *sqlite3_value_text16be(sqlite3_value*);
SQLITE_API int sqlite3_value_bytes(sqlite3_value*);
SQLITE_API int sqlite3_value_bytes16(sqlite3_value*);
SQLITE_API int sqlite3_value_type(sqlite3_value*);
SQLITE_API int sqlite3_value_numeric_type(sqlite3_value*);
SQLITE_API int sqlite3_value_nochange(sqlite3_value*);
SQLITE_API int sqlite3_value_frombind(sqlite3_value*);
# 5185 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API unsigned int sqlite3_value_subtype(sqlite3_value*);
# 5201 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API sqlite3_value *sqlite3_value_dup(const sqlite3_value*);
SQLITE_API void sqlite3_value_free(sqlite3_value*);
# 5247 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API void *sqlite3_aggregate_context(sqlite3_context*, int nBytes);
# 5262 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API void *sqlite3_user_data(sqlite3_context*);
# 5274 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API sqlite3 *sqlite3_context_db_handle(sqlite3_context*);
# 5333 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API void *sqlite3_get_auxdata(sqlite3_context*, int N);
SQLITE_API void sqlite3_set_auxdata(sqlite3_context*, int N, void*, void (*)(void*));
# 5351 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef void (*sqlite3_destructor_type)(void*);
#define SQLITE_STATIC ((sqlite3_destructor_type)0)
#define SQLITE_TRANSIENT ((sqlite3_destructor_type)-1)
# 5481 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API void sqlite3_result_blob(sqlite3_context*, const void*, int, void(*)(void*));
SQLITE_API void sqlite3_result_blob64(sqlite3_context*,const void*,
                           sqlite3_uint64,void(*)(void*));
SQLITE_API void sqlite3_result_double(sqlite3_context*, double);
SQLITE_API void sqlite3_result_error(sqlite3_context*, const char*, int);
SQLITE_API void sqlite3_result_error16(sqlite3_context*, const void*, int);
SQLITE_API void sqlite3_result_error_toobig(sqlite3_context*);
SQLITE_API void sqlite3_result_error_nomem(sqlite3_context*);
SQLITE_API void sqlite3_result_error_code(sqlite3_context*, int);
SQLITE_API void sqlite3_result_int(sqlite3_context*, int);
SQLITE_API void sqlite3_result_int64(sqlite3_context*, sqlite3_int64);
SQLITE_API void sqlite3_result_null(sqlite3_context*);
SQLITE_API void sqlite3_result_text(sqlite3_context*, const char*, int, void(*)(void*));
SQLITE_API void sqlite3_result_text64(sqlite3_context*, const char*,sqlite3_uint64,
                           void(*)(void*), unsigned char encoding);
SQLITE_API void sqlite3_result_text16(sqlite3_context*, const void*, int, void(*)(void*));
SQLITE_API void sqlite3_result_text16le(sqlite3_context*, const void*, int,void(*)(void*));
SQLITE_API void sqlite3_result_text16be(sqlite3_context*, const void*, int,void(*)(void*));
SQLITE_API void sqlite3_result_value(sqlite3_context*, sqlite3_value*);
SQLITE_API void sqlite3_result_pointer(sqlite3_context*, void*,const char*,void(*)(void*));
SQLITE_API void sqlite3_result_zeroblob(sqlite3_context*, int n);
SQLITE_API int sqlite3_result_zeroblob64(sqlite3_context*, sqlite3_uint64 n);
# 5517 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API void sqlite3_result_subtype(sqlite3_context*,unsigned int);
# 5599 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_create_collation(
  sqlite3*,
  const char *zName,
  int eTextRep,
  void *pArg,
  int(*xCompare)(void*,int,const void*,int,const void*)
);
SQLITE_API int sqlite3_create_collation_v2(
  sqlite3*,
  const char *zName,
  int eTextRep,
  void *pArg,
  int(*xCompare)(void*,int,const void*,int,const void*),
  void(*xDestroy)(void*)
);
SQLITE_API int sqlite3_create_collation16(
  sqlite3*,
  const void *zName,
  int eTextRep,
  void *pArg,
  int(*xCompare)(void*,int,const void*,int,const void*)
);
# 5649 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_collation_needed(
  sqlite3*,
  void*,
  void(*)(void*,sqlite3*,int eTextRep,const char*)
);
SQLITE_API int sqlite3_collation_needed16(
  sqlite3*,
  void*,
  void(*)(void*,sqlite3*,int eTextRep,const void*)
);

#ifdef SQLITE_HAS_CODEC







SQLITE_API int sqlite3_key(
  sqlite3 *db,
  const void *pKey, int nKey
);
SQLITE_API int sqlite3_key_v2(
  sqlite3 *db,
  const char *zDbName,
  const void *pKey, int nKey
);
# 5686 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_rekey(
  sqlite3 *db,
  const void *pKey, int nKey
);
SQLITE_API int sqlite3_rekey_v2(
  sqlite3 *db,
  const char *zDbName,
  const void *pKey, int nKey
);





SQLITE_API void sqlite3_activate_see(
  const char *zPassPhrase
);
#endif

#ifdef SQLITE_ENABLE_CEROD




SQLITE_API void sqlite3_activate_cerod(
  const char *zPassPhrase
);
#endif
# 5732 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_sleep(int);
# 5790 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API SQLITE_EXTERN char *sqlite3_temp_directory;
# 5827 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API SQLITE_EXTERN char *sqlite3_data_directory;
# 5848 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_win32_set_directory(
  unsigned long type,
  void *zValue
);
SQLITE_API int sqlite3_win32_set_directory8(unsigned long type, const char *zValue);
SQLITE_API int sqlite3_win32_set_directory16(unsigned long type, const void *zValue);







#define SQLITE_WIN32_DATA_DIRECTORY_TYPE 1
#define SQLITE_WIN32_TEMP_DIRECTORY_TYPE 2
# 5886 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_get_autocommit(sqlite3*);
# 5899 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API sqlite3 *sqlite3_db_handle(sqlite3_stmt*);
# 5916 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API const char *sqlite3_db_filename(sqlite3 *db, const char *zDbName);
# 5926 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_db_readonly(sqlite3 *db, const char *zDbName);
# 5942 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API sqlite3_stmt *sqlite3_next_stmt(sqlite3 *pDb, sqlite3_stmt *pStmt);
# 5991 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API void *sqlite3_commit_hook(sqlite3*, int(*)(void*), void*);
SQLITE_API void *sqlite3_rollback_hook(sqlite3*, void(*)(void *), void*);
# 6043 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API void *sqlite3_update_hook(
  sqlite3*,
  void(*)(void *,int ,char const *,char const *,sqlite3_int64),
  void*
);
# 6084 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_enable_shared_cache(int);
# 6100 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_release_memory(int);
# 6114 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_db_release_memory(sqlite3*);
# 6167 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API sqlite3_int64 sqlite3_soft_heap_limit64(sqlite3_int64 N);
# 6178 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API SQLITE_DEPRECATED void sqlite3_soft_heap_limit(int N);
# 6250 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_table_column_metadata(
  sqlite3 *db,
  const char *zDbName,
  const char *zTableName,
  const char *zColumnName,
  char const **pzDataType,
  char const **pzCollSeq,
  int *pNotNull,
  int *pPrimaryKey,
  int *pAutoinc
);
# 6306 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_load_extension(
  sqlite3 *db,
  const char *zFile,
  const char *zProc,
  char **pzErrMsg
);
# 6338 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_enable_load_extension(sqlite3 *db, int onoff);
# 6376 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_auto_extension(void(*xEntryPoint)(void));
# 6388 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_cancel_auto_extension(void(*xEntryPoint)(void));







SQLITE_API void sqlite3_reset_auto_extension(void);
# 6410 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_vtab sqlite3_vtab;
typedef struct sqlite3_index_info sqlite3_index_info;
typedef struct sqlite3_vtab_cursor sqlite3_vtab_cursor;
typedef struct sqlite3_module sqlite3_module;
# 6431 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
struct sqlite3_module {
  int iVersion;
  int (*xCreate)(sqlite3*, void *pAux,
               int argc, const char *const*argv,
               sqlite3_vtab **ppVTab, char**);
  int (*xConnect)(sqlite3*, void *pAux,
               int argc, const char *const*argv,
               sqlite3_vtab **ppVTab, char**);
  int (*xBestIndex)(sqlite3_vtab *pVTab, sqlite3_index_info*);
  int (*xDisconnect)(sqlite3_vtab *pVTab);
  int (*xDestroy)(sqlite3_vtab *pVTab);
  int (*xOpen)(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor);
  int (*xClose)(sqlite3_vtab_cursor*);
  int (*xFilter)(sqlite3_vtab_cursor*, int idxNum, const char *idxStr,
                int argc, sqlite3_value **argv);
  int (*xNext)(sqlite3_vtab_cursor*);
  int (*xEof)(sqlite3_vtab_cursor*);
  int (*xColumn)(sqlite3_vtab_cursor*, sqlite3_context*, int);
  int (*xRowid)(sqlite3_vtab_cursor*, sqlite3_int64 *pRowid);
  int (*xUpdate)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *);
  int (*xBegin)(sqlite3_vtab *pVTab);
  int (*xSync)(sqlite3_vtab *pVTab);
  int (*xCommit)(sqlite3_vtab *pVTab);
  int (*xRollback)(sqlite3_vtab *pVTab);
  int (*xFindFunction)(sqlite3_vtab *pVtab, int nArg, const char *zName,
                       void (**pxFunc)(sqlite3_context*,int,sqlite3_value**),
                       void **ppArg);
  int (*xRename)(sqlite3_vtab *pVtab, const char *zNew);


  int (*xSavepoint)(sqlite3_vtab *pVTab, int);
  int (*xRelease)(sqlite3_vtab *pVTab, int);
  int (*xRollbackTo)(sqlite3_vtab *pVTab, int);


  int (*xShadowName)(const char*);
};
# 6565 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
struct sqlite3_index_info {

  int nConstraint;
  struct sqlite3_index_constraint {
     int iColumn;
     unsigned char op;
     unsigned char usable;
     int iTermOffset;
  } *aConstraint;
  int nOrderBy;
  struct sqlite3_index_orderby {
     int iColumn;
     unsigned char desc;
  } *aOrderBy;

  struct sqlite3_index_constraint_usage {
    int argvIndex;
    unsigned char omit;
  } *aConstraintUsage;
  int idxNum;
  char *idxStr;
  int needToFreeIdxStr;
  int orderByConsumed;
  double estimatedCost;

  sqlite3_int64 estimatedRows;

  int idxFlags;

  sqlite3_uint64 colUsed;
};
# 6604 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_INDEX_SCAN_UNIQUE 1
# 6614 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_INDEX_CONSTRAINT_EQ 2
#define SQLITE_INDEX_CONSTRAINT_GT 4
#define SQLITE_INDEX_CONSTRAINT_LE 8
#define SQLITE_INDEX_CONSTRAINT_LT 16
#define SQLITE_INDEX_CONSTRAINT_GE 32
#define SQLITE_INDEX_CONSTRAINT_MATCH 64
#define SQLITE_INDEX_CONSTRAINT_LIKE 65
#define SQLITE_INDEX_CONSTRAINT_GLOB 66
#define SQLITE_INDEX_CONSTRAINT_REGEXP 67
#define SQLITE_INDEX_CONSTRAINT_NE 68
#define SQLITE_INDEX_CONSTRAINT_ISNOT 69
#define SQLITE_INDEX_CONSTRAINT_ISNOTNULL 70
#define SQLITE_INDEX_CONSTRAINT_ISNULL 71
#define SQLITE_INDEX_CONSTRAINT_IS 72
#define SQLITE_INDEX_CONSTRAINT_FUNCTION 150
# 6662 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_create_module(
  sqlite3 *db,
  const char *zName,
  const sqlite3_module *p,
  void *pClientData
);
SQLITE_API int sqlite3_create_module_v2(
  sqlite3 *db,
  const char *zName,
  const sqlite3_module *p,
  void *pClientData,
  void(*xDestroy)(void*)
);
# 6688 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_drop_modules(
  sqlite3 *db,
  const char **azKeep
);
# 6711 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
struct sqlite3_vtab {
  const sqlite3_module *pModule;
  int nRef;
  char *zErrMsg;

};
# 6735 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
struct sqlite3_vtab_cursor {
  sqlite3_vtab *pVtab;

};
# 6748 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_declare_vtab(sqlite3*, const char *zSQL);
# 6767 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_overload_function(sqlite3*, const char *zFuncName, int nArg);
# 6791 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_blob sqlite3_blob;
# 6876 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_blob_open(
  sqlite3*,
  const char *zDb,
  const char *zTable,
  const char *zColumn,
  sqlite3_int64 iRow,
  int flags,
  sqlite3_blob **ppBlob
);
# 6909 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_blob_reopen(sqlite3_blob *, sqlite3_int64);
# 6932 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_blob_close(sqlite3_blob *);
# 6948 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_blob_bytes(sqlite3_blob *);
# 6977 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_blob_read(sqlite3_blob *, void *Z, int N, int iOffset);
# 7019 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_blob_write(sqlite3_blob *, const void *z, int n, int iOffset);
# 7050 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API sqlite3_vfs *sqlite3_vfs_find(const char *zVfsName);
SQLITE_API int sqlite3_vfs_register(sqlite3_vfs*, int makeDflt);
SQLITE_API int sqlite3_vfs_unregister(sqlite3_vfs*);
# 7168 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API sqlite3_mutex *sqlite3_mutex_alloc(int);
SQLITE_API void sqlite3_mutex_free(sqlite3_mutex*);
SQLITE_API void sqlite3_mutex_enter(sqlite3_mutex*);
SQLITE_API int sqlite3_mutex_try(sqlite3_mutex*);
SQLITE_API void sqlite3_mutex_leave(sqlite3_mutex*);
# 7239 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_mutex_methods sqlite3_mutex_methods;
struct sqlite3_mutex_methods {
  int (*xMutexInit)(void);
  int (*xMutexEnd)(void);
  sqlite3_mutex *(*xMutexAlloc)(int);
  void (*xMutexFree)(sqlite3_mutex *);
  void (*xMutexEnter)(sqlite3_mutex *);
  int (*xMutexTry)(sqlite3_mutex *);
  void (*xMutexLeave)(sqlite3_mutex *);
  int (*xMutexHeld)(sqlite3_mutex *);
  int (*xMutexNotheld)(sqlite3_mutex *);
};
# 7281 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#ifndef NDEBUG
SQLITE_API int sqlite3_mutex_held(sqlite3_mutex*);
SQLITE_API int sqlite3_mutex_notheld(sqlite3_mutex*);
#endif
# 7296 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_MUTEX_FAST 0
#define SQLITE_MUTEX_RECURSIVE 1
#define SQLITE_MUTEX_STATIC_MASTER 2
#define SQLITE_MUTEX_STATIC_MEM 3
#define SQLITE_MUTEX_STATIC_MEM2 4
#define SQLITE_MUTEX_STATIC_OPEN 4
#define SQLITE_MUTEX_STATIC_PRNG 5
#define SQLITE_MUTEX_STATIC_LRU 6
#define SQLITE_MUTEX_STATIC_LRU2 7
#define SQLITE_MUTEX_STATIC_PMEM 7
#define SQLITE_MUTEX_STATIC_APP1 8
#define SQLITE_MUTEX_STATIC_APP2 9
#define SQLITE_MUTEX_STATIC_APP3 10
#define SQLITE_MUTEX_STATIC_VFS1 11
#define SQLITE_MUTEX_STATIC_VFS2 12
#define SQLITE_MUTEX_STATIC_VFS3 13
# 7323 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API sqlite3_mutex *sqlite3_db_mutex(sqlite3*);
# 7366 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_file_control(sqlite3*, const char *zDbName, int op, void*);
# 7385 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_test_control(int op, ...);
# 7398 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_TESTCTRL_FIRST 5
#define SQLITE_TESTCTRL_PRNG_SAVE 5
#define SQLITE_TESTCTRL_PRNG_RESTORE 6
#define SQLITE_TESTCTRL_PRNG_RESET 7
#define SQLITE_TESTCTRL_BITVEC_TEST 8
#define SQLITE_TESTCTRL_FAULT_INSTALL 9
#define SQLITE_TESTCTRL_BENIGN_MALLOC_HOOKS 10
#define SQLITE_TESTCTRL_PENDING_BYTE 11
#define SQLITE_TESTCTRL_ASSERT 12
#define SQLITE_TESTCTRL_ALWAYS 13
#define SQLITE_TESTCTRL_RESERVE 14
#define SQLITE_TESTCTRL_OPTIMIZATIONS 15
#define SQLITE_TESTCTRL_ISKEYWORD 16
#define SQLITE_TESTCTRL_SCRATCHMALLOC 17
#define SQLITE_TESTCTRL_INTERNAL_FUNCTIONS 17
#define SQLITE_TESTCTRL_LOCALTIME_FAULT 18
#define SQLITE_TESTCTRL_EXPLAIN_STMT 19
#define SQLITE_TESTCTRL_ONCE_RESET_THRESHOLD 19
#define SQLITE_TESTCTRL_NEVER_CORRUPT 20
#define SQLITE_TESTCTRL_VDBE_COVERAGE 21
#define SQLITE_TESTCTRL_BYTEORDER 22
#define SQLITE_TESTCTRL_ISINIT 23
#define SQLITE_TESTCTRL_SORTER_MMAP 24
#define SQLITE_TESTCTRL_IMPOSTER 25
#define SQLITE_TESTCTRL_PARSER_COVERAGE 26
#define SQLITE_TESTCTRL_RESULT_INTREAL 27
#define SQLITE_TESTCTRL_PRNG_SEED 28
#define SQLITE_TESTCTRL_EXTRA_SCHEMA_CHECKS 29
#define SQLITE_TESTCTRL_LAST 29
# 7475 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_keyword_count(void);
SQLITE_API int sqlite3_keyword_name(int,const char**,int*);
SQLITE_API int sqlite3_keyword_check(const char*,int);
# 7495 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_str sqlite3_str;
# 7522 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API sqlite3_str *sqlite3_str_new(sqlite3*);
# 7537 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API char *sqlite3_str_finish(sqlite3_str*);
# 7571 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API void sqlite3_str_appendf(sqlite3_str*, const char *zFormat, ...);
SQLITE_API void sqlite3_str_vappendf(sqlite3_str*, const char *zFormat, va_list);
SQLITE_API void sqlite3_str_append(sqlite3_str*, const char *zIn, int N);
SQLITE_API void sqlite3_str_appendall(sqlite3_str*, const char *zIn);
SQLITE_API void sqlite3_str_appendchar(sqlite3_str*, int N, char C);
SQLITE_API void sqlite3_str_reset(sqlite3_str*);
# 7607 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_str_errcode(sqlite3_str*);
SQLITE_API int sqlite3_str_length(sqlite3_str*);
SQLITE_API char *sqlite3_str_value(sqlite3_str*);
# 7637 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_status(int op, int *pCurrent, int *pHighwater, int resetFlag);
SQLITE_API int sqlite3_status64(
  int op,
  sqlite3_int64 *pCurrent,
  sqlite3_int64 *pHighwater,
  int resetFlag
);
# 7713 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_STATUS_MEMORY_USED 0
#define SQLITE_STATUS_PAGECACHE_USED 1
#define SQLITE_STATUS_PAGECACHE_OVERFLOW 2
#define SQLITE_STATUS_SCRATCH_USED 3
#define SQLITE_STATUS_SCRATCH_OVERFLOW 4
#define SQLITE_STATUS_MALLOC_SIZE 5
#define SQLITE_STATUS_PARSER_STACK 6
#define SQLITE_STATUS_PAGECACHE_SIZE 7
#define SQLITE_STATUS_SCRATCH_SIZE 8
#define SQLITE_STATUS_MALLOC_COUNT 9
# 7747 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_db_status(sqlite3*, int op, int *pCur, int *pHiwtr, int resetFlg);
# 7860 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_DBSTATUS_LOOKASIDE_USED 0
#define SQLITE_DBSTATUS_CACHE_USED 1
#define SQLITE_DBSTATUS_SCHEMA_USED 2
#define SQLITE_DBSTATUS_STMT_USED 3
#define SQLITE_DBSTATUS_LOOKASIDE_HIT 4
#define SQLITE_DBSTATUS_LOOKASIDE_MISS_SIZE 5
#define SQLITE_DBSTATUS_LOOKASIDE_MISS_FULL 6
#define SQLITE_DBSTATUS_CACHE_HIT 7
#define SQLITE_DBSTATUS_CACHE_MISS 8
#define SQLITE_DBSTATUS_CACHE_WRITE 9
#define SQLITE_DBSTATUS_DEFERRED_FKS 10
#define SQLITE_DBSTATUS_CACHE_USED_SHARED 11
#define SQLITE_DBSTATUS_CACHE_SPILL 12
#define SQLITE_DBSTATUS_MAX 12
# 7900 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_stmt_status(sqlite3_stmt*, int op,int resetFlg);
# 7957 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_STMTSTATUS_FULLSCAN_STEP 1
#define SQLITE_STMTSTATUS_SORT 2
#define SQLITE_STMTSTATUS_AUTOINDEX 3
#define SQLITE_STMTSTATUS_VM_STEP 4
#define SQLITE_STMTSTATUS_REPREPARE 5
#define SQLITE_STMTSTATUS_RUN 6
#define SQLITE_STMTSTATUS_MEMUSED 99
# 7976 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_pcache sqlite3_pcache;
# 7988 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_pcache_page sqlite3_pcache_page;
struct sqlite3_pcache_page {
  void *pBuf;
  void *pExtra;
};
# 8153 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_pcache_methods2 sqlite3_pcache_methods2;
struct sqlite3_pcache_methods2 {
  int iVersion;
  void *pArg;
  int (*xInit)(void*);
  void (*xShutdown)(void*);
  sqlite3_pcache *(*xCreate)(int szPage, int szExtra, int bPurgeable);
  void (*xCachesize)(sqlite3_pcache*, int nCachesize);
  int (*xPagecount)(sqlite3_pcache*);
  sqlite3_pcache_page *(*xFetch)(sqlite3_pcache*, unsigned key, int createFlag);
  void (*xUnpin)(sqlite3_pcache*, sqlite3_pcache_page*, int discard);
  void (*xRekey)(sqlite3_pcache*, sqlite3_pcache_page*,
      unsigned oldKey, unsigned newKey);
  void (*xTruncate)(sqlite3_pcache*, unsigned iLimit);
  void (*xDestroy)(sqlite3_pcache*);
  void (*xShrink)(sqlite3_pcache*);
};






typedef struct sqlite3_pcache_methods sqlite3_pcache_methods;
struct sqlite3_pcache_methods {
  void *pArg;
  int (*xInit)(void*);
  void (*xShutdown)(void*);
  sqlite3_pcache *(*xCreate)(int szPage, int bPurgeable);
  void (*xCachesize)(sqlite3_pcache*, int nCachesize);
  int (*xPagecount)(sqlite3_pcache*);
  void *(*xFetch)(sqlite3_pcache*, unsigned key, int createFlag);
  void (*xUnpin)(sqlite3_pcache*, void*, int discard);
  void (*xRekey)(sqlite3_pcache*, void*, unsigned oldKey, unsigned newKey);
  void (*xTruncate)(sqlite3_pcache*, unsigned iLimit);
  void (*xDestroy)(sqlite3_pcache*);
};
# 8202 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_backup sqlite3_backup;
# 8390 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API sqlite3_backup *sqlite3_backup_init(
  sqlite3 *pDest,
  const char *zDestName,
  sqlite3 *pSource,
  const char *zSourceName
);
SQLITE_API int sqlite3_backup_step(sqlite3_backup *p, int nPage);
SQLITE_API int sqlite3_backup_finish(sqlite3_backup *p);
SQLITE_API int sqlite3_backup_remaining(sqlite3_backup *p);
SQLITE_API int sqlite3_backup_pagecount(sqlite3_backup *p);
# 8516 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_unlock_notify(
  sqlite3 *pBlocked,
  void (*xNotify)(void **apArg, int nArg),
  void *pNotifyArg
);
# 8531 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_stricmp(const char *, const char *);
SQLITE_API int sqlite3_strnicmp(const char *, const char *, int);
# 8549 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_strglob(const char *zGlob, const char *zStr);
# 8572 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_strlike(const char *zGlob, const char *zStr, unsigned int cEsc);
# 8595 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API void sqlite3_log(int iErrCode, const char *zFormat, ...);
# 8631 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API void *sqlite3_wal_hook(
  sqlite3*,
  int(*)(void *,sqlite3*,const char*,int),
  void*
);
# 8666 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_wal_autocheckpoint(sqlite3 *db, int N);
# 8688 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_wal_checkpoint(sqlite3 *db, const char *zDb);
# 8782 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_wal_checkpoint_v2(
  sqlite3 *db,
  const char *zDb,
  int eMode,
  int *pnLog,
  int *pnCkpt
);
# 8799 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_CHECKPOINT_PASSIVE 0
#define SQLITE_CHECKPOINT_FULL 1
#define SQLITE_CHECKPOINT_RESTART 2
#define SQLITE_CHECKPOINT_TRUNCATE 3
# 8818 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_vtab_config(sqlite3*, int op, ...);
# 8860 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_VTAB_CONSTRAINT_SUPPORT 1
# 8872 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_vtab_on_conflict(sqlite3 *);
# 8891 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_vtab_nochange(sqlite3_context*);
# 8906 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API SQLITE_EXPERIMENTAL const char *sqlite3_vtab_collation(sqlite3_index_info*,int);
# 8920 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_ROLLBACK 1

#define SQLITE_FAIL 3

#define SQLITE_REPLACE 5
# 8973 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_SCANSTAT_NLOOP 0
#define SQLITE_SCANSTAT_NVISIT 1
#define SQLITE_SCANSTAT_EST 2
#define SQLITE_SCANSTAT_NAME 3
#define SQLITE_SCANSTAT_EXPLAIN 4
#define SQLITE_SCANSTAT_SELECTID 5
# 9011 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_stmt_scanstatus(
  sqlite3_stmt *pStmt,
  int idx,
  int iScanStatusOp,
  void *pOut
);
# 9027 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API void sqlite3_stmt_scanstatus_reset(sqlite3_stmt*);
# 9059 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_db_cacheflush(sqlite3*);
# 9143 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#if defined(SQLITE_ENABLE_PREUPDATE_HOOK)
SQLITE_API void *sqlite3_preupdate_hook(
  sqlite3 *db,
  void(*xPreUpdate)(
    void *pCtx,
    sqlite3 *db,
    int op,
    char const *zDb,
    char const *zName,
    sqlite3_int64 iKey1,
    sqlite3_int64 iKey2
  ),
  void*
);
SQLITE_API int sqlite3_preupdate_old(sqlite3 *, int, sqlite3_value **);
SQLITE_API int sqlite3_preupdate_count(sqlite3 *);
SQLITE_API int sqlite3_preupdate_depth(sqlite3 *);
SQLITE_API int sqlite3_preupdate_new(sqlite3 *, int, sqlite3_value **);
#endif
# 9173 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_system_errno(sqlite3*);
# 9195 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_snapshot {
  unsigned char hidden[48];
} sqlite3_snapshot;
# 9242 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API SQLITE_EXPERIMENTAL int sqlite3_snapshot_get(
  sqlite3 *db,
  const char *zSchema,
  sqlite3_snapshot **ppSnapshot
);
# 9291 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API SQLITE_EXPERIMENTAL int sqlite3_snapshot_open(
  sqlite3 *db,
  const char *zSchema,
  sqlite3_snapshot *pSnapshot
);
# 9308 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API SQLITE_EXPERIMENTAL void sqlite3_snapshot_free(sqlite3_snapshot*);
# 9335 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API SQLITE_EXPERIMENTAL int sqlite3_snapshot_cmp(
  sqlite3_snapshot *p1,
  sqlite3_snapshot *p2
);
# 9363 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API SQLITE_EXPERIMENTAL int sqlite3_snapshot_recover(sqlite3 *db, const char *zDb);
# 9401 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API unsigned char *sqlite3_serialize(
  sqlite3 *db,
  const char *zSchema,
  sqlite3_int64 *piSize,
  unsigned int mFlags
);
# 9422 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_SERIALIZE_NOCOPY 0x001
# 9453 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3_deserialize(
  sqlite3 *db,
  const char *zSchema,
  unsigned char *pData,
  sqlite3_int64 szDb,
  sqlite3_int64 szBuf,
  unsigned mFlags
);
# 9483 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_DESERIALIZE_FREEONCLOSE 1
#define SQLITE_DESERIALIZE_RESIZEABLE 2
#define SQLITE_DESERIALIZE_READONLY 4





#ifdef SQLITE_OMIT_FLOATING_POINT
#undef double
#endif

#ifdef __cplusplus
}
#endif
#endif
# 9514 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#ifndef _SQLITE3RTREE_H_
#define _SQLITE3RTREE_H_ 


#ifdef __cplusplus
extern "C" {
#endif

typedef struct sqlite3_rtree_geometry sqlite3_rtree_geometry;
typedef struct sqlite3_rtree_query_info sqlite3_rtree_query_info;




#ifdef SQLITE_RTREE_INT_ONLY
  typedef sqlite3_int64 sqlite3_rtree_dbl;
#else
  typedef double sqlite3_rtree_dbl;
#endif







SQLITE_API int sqlite3_rtree_geometry_callback(
  sqlite3 *db,
  const char *zGeom,
  int (*xGeom)(sqlite3_rtree_geometry*, int, sqlite3_rtree_dbl*,int*),
  void *pContext
);






struct sqlite3_rtree_geometry {
  void *pContext;
  int nParam;
  sqlite3_rtree_dbl *aParam;
  void *pUser;
  void (*xDelUser)(void *);
};







SQLITE_API int sqlite3_rtree_query_callback(
  sqlite3 *db,
  const char *zQueryFunc,
  int (*xQueryFunc)(sqlite3_rtree_query_info*),
  void *pContext,
  void (*xDestructor)(void*)
);
# 9584 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
struct sqlite3_rtree_query_info {
  void *pContext;
  int nParam;
  sqlite3_rtree_dbl *aParam;
  void *pUser;
  void (*xDelUser)(void*);
  sqlite3_rtree_dbl *aCoord;
  unsigned int *anQueue;
  int nCoord;
  int iLevel;
  int mxLevel;
  sqlite3_int64 iRowid;
  sqlite3_rtree_dbl rParentScore;
  int eParentWithin;
  int eWithin;
  sqlite3_rtree_dbl rScore;

  sqlite3_value **apSqlParam;
};




#define NOT_WITHIN 0
#define PARTLY_WITHIN 1
#define FULLY_WITHIN 2


#ifdef __cplusplus
}
#endif

#endif




#if !defined(__SQLITESESSION_H_) && defined(SQLITE_ENABLE_SESSION)
#define __SQLITESESSION_H_ 1




#ifdef __cplusplus
extern "C" {
#endif
# 9638 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_session sqlite3_session;







typedef struct sqlite3_changeset_iter sqlite3_changeset_iter;
# 9679 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3session_create(
  sqlite3 *db,
  const char *zDb,
  sqlite3_session **ppSession
);
# 9698 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API void sqlite3session_delete(sqlite3_session *pSession);
# 9719 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3session_enable(sqlite3_session *pSession, int bEnable);
# 9749 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3session_indirect(sqlite3_session *pSession, int bIndirect);
# 9809 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3session_attach(
  sqlite3_session *pSession,
  const char *zTab
);
# 9824 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API void sqlite3session_table_filter(
  sqlite3_session *pSession,
  int(*xFilter)(
    void *pCtx,
    const char *zTab
  ),
  void *pCtx
);
# 9938 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3session_changeset(
  sqlite3_session *pSession,
  int *pnChangeset,
  void **ppChangeset
);
# 10001 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3session_diff(
  sqlite3_session *pSession,
  const char *zFromDb,
  const char *zTbl,
  char **pzErrMsg
);
# 10038 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3session_patchset(
  sqlite3_session *pSession,
  int *pnPatchset,
  void **ppPatchset
);
# 10059 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3session_isempty(sqlite3_session *pSession);
# 10102 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3changeset_start(
  sqlite3_changeset_iter **pp,
  int nChangeset,
  void *pChangeset
);
SQLITE_API int sqlite3changeset_start_v2(
  sqlite3_changeset_iter **pp,
  int nChangeset,
  void *pChangeset,
  int flags
);
# 10125 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_CHANGESETSTART_INVERT 0x0002
# 10151 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3changeset_next(sqlite3_changeset_iter *pIter);
# 10180 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3changeset_op(
  sqlite3_changeset_iter *pIter,
  const char **pzTab,
  int *pnCol,
  int *pOp,
  int *pbIndirect
);
# 10214 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3changeset_pk(
  sqlite3_changeset_iter *pIter,
  unsigned char **pabPK,
  int *pnCol
);
# 10245 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3changeset_old(
  sqlite3_changeset_iter *pIter,
  int iVal,
  sqlite3_value **ppValue
);
# 10279 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3changeset_new(
  sqlite3_changeset_iter *pIter,
  int iVal,
  sqlite3_value **ppValue
);
# 10307 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3changeset_conflict(
  sqlite3_changeset_iter *pIter,
  int iVal,
  sqlite3_value **ppValue
);
# 10324 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3changeset_fk_conflicts(
  sqlite3_changeset_iter *pIter,
  int *pnOut
);
# 10360 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3changeset_finalize(sqlite3_changeset_iter *pIter);
# 10390 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3changeset_invert(
  int nIn, const void *pIn,
  int *pnOut, void **ppOut
);
# 10421 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3changeset_concat(
  int nA,
  void *pA,
  int nB,
  void *pB,
  int *pnOut,
  void **ppOut
);
# 10437 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_changegroup sqlite3_changegroup;
# 10475 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3changegroup_new(sqlite3_changegroup **pp);
# 10553 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3changegroup_add(sqlite3_changegroup*, int nData, void *pData);
# 10580 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3changegroup_output(
  sqlite3_changegroup*,
  int *pnData,
  void **ppData
);





SQLITE_API void sqlite3changegroup_delete(sqlite3_changegroup*);
# 10750 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3changeset_apply(
  sqlite3 *db,
  int nChangeset,
  void *pChangeset,
  int(*xFilter)(
    void *pCtx,
    const char *zTab
  ),
  int(*xConflict)(
    void *pCtx,
    int eConflict,
    sqlite3_changeset_iter *p
  ),
  void *pCtx
);
SQLITE_API int sqlite3changeset_apply_v2(
  sqlite3 *db,
  int nChangeset,
  void *pChangeset,
  int(*xFilter)(
    void *pCtx,
    const char *zTab
  ),
  int(*xConflict)(
    void *pCtx,
    int eConflict,
    sqlite3_changeset_iter *p
  ),
  void *pCtx,
  void **ppRebase, int *pnRebase,
  int flags
);
# 10804 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_CHANGESETAPPLY_NOSAVEPOINT 0x0001
#define SQLITE_CHANGESETAPPLY_INVERT 0x0002
# 10862 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_CHANGESET_DATA 1
#define SQLITE_CHANGESET_NOTFOUND 2
#define SQLITE_CHANGESET_CONFLICT 3
#define SQLITE_CHANGESET_CONSTRAINT 4
#define SQLITE_CHANGESET_FOREIGN_KEY 5
# 10899 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#define SQLITE_CHANGESET_OMIT 0
#define SQLITE_CHANGESET_REPLACE 1
#define SQLITE_CHANGESET_ABORT 2
# 11001 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_rebaser sqlite3_rebaser;
# 11012 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3rebaser_create(sqlite3_rebaser **ppNew);
# 11023 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3rebaser_configure(
  sqlite3_rebaser*,
  int nRebase, const void *pRebase
);
# 11042 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3rebaser_rebase(
  sqlite3_rebaser*,
  int nIn, const void *pIn,
  int *pnOut, void **ppOut
);
# 11056 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API void sqlite3rebaser_delete(sqlite3_rebaser *p);
# 11148 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3changeset_apply_strm(
  sqlite3 *db,
  int (*xInput)(void *pIn, void *pData, int *pnData),
  void *pIn,
  int(*xFilter)(
    void *pCtx,
    const char *zTab
  ),
  int(*xConflict)(
    void *pCtx,
    int eConflict,
    sqlite3_changeset_iter *p
  ),
  void *pCtx
);
SQLITE_API int sqlite3changeset_apply_v2_strm(
  sqlite3 *db,
  int (*xInput)(void *pIn, void *pData, int *pnData),
  void *pIn,
  int(*xFilter)(
    void *pCtx,
    const char *zTab
  ),
  int(*xConflict)(
    void *pCtx,
    int eConflict,
    sqlite3_changeset_iter *p
  ),
  void *pCtx,
  void **ppRebase, int *pnRebase,
  int flags
);
SQLITE_API int sqlite3changeset_concat_strm(
  int (*xInputA)(void *pIn, void *pData, int *pnData),
  void *pInA,
  int (*xInputB)(void *pIn, void *pData, int *pnData),
  void *pInB,
  int (*xOutput)(void *pOut, const void *pData, int nData),
  void *pOut
);
SQLITE_API int sqlite3changeset_invert_strm(
  int (*xInput)(void *pIn, void *pData, int *pnData),
  void *pIn,
  int (*xOutput)(void *pOut, const void *pData, int nData),
  void *pOut
);
SQLITE_API int sqlite3changeset_start_strm(
  sqlite3_changeset_iter **pp,
  int (*xInput)(void *pIn, void *pData, int *pnData),
  void *pIn
);
SQLITE_API int sqlite3changeset_start_v2_strm(
  sqlite3_changeset_iter **pp,
  int (*xInput)(void *pIn, void *pData, int *pnData),
  void *pIn,
  int flags
);
SQLITE_API int sqlite3session_changeset_strm(
  sqlite3_session *pSession,
  int (*xOutput)(void *pOut, const void *pData, int nData),
  void *pOut
);
SQLITE_API int sqlite3session_patchset_strm(
  sqlite3_session *pSession,
  int (*xOutput)(void *pOut, const void *pData, int nData),
  void *pOut
);
SQLITE_API int sqlite3changegroup_add_strm(sqlite3_changegroup*,
    int (*xInput)(void *pIn, void *pData, int *pnData),
    void *pIn
);
SQLITE_API int sqlite3changegroup_output_strm(sqlite3_changegroup*,
    int (*xOutput)(void *pOut, const void *pData, int nData),
    void *pOut
);
SQLITE_API int sqlite3rebaser_rebase_strm(
  sqlite3_rebaser *pRebaser,
  int (*xInput)(void *pIn, void *pData, int *pnData),
  void *pIn,
  int (*xOutput)(void *pOut, const void *pData, int nData),
  void *pOut
);
# 11264 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
SQLITE_API int sqlite3session_config(int op, void *pArg);




#define SQLITE_SESSION_CONFIG_STRMSIZE 1




#ifdef __cplusplus
}
#endif

#endif
# 11302 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
#ifndef _FTS5_H
#define _FTS5_H 


#ifdef __cplusplus
extern "C" {
#endif
# 11317 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct Fts5ExtensionApi Fts5ExtensionApi;
typedef struct Fts5Context Fts5Context;
typedef struct Fts5PhraseIter Fts5PhraseIter;

typedef void (*fts5_extension_function)(
  const Fts5ExtensionApi *pApi,
  Fts5Context *pFts,
  sqlite3_context *pCtx,
  int nVal,
  sqlite3_value **apVal
);

struct Fts5PhraseIter {
  const unsigned char *a;
  const unsigned char *b;
};
# 11545 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
struct Fts5ExtensionApi {
  int iVersion;

  void *(*xUserData)(Fts5Context*);

  int (*xColumnCount)(Fts5Context*);
  int (*xRowCount)(Fts5Context*, sqlite3_int64 *pnRow);
  int (*xColumnTotalSize)(Fts5Context*, int iCol, sqlite3_int64 *pnToken);

  int (*xTokenize)(Fts5Context*,
    const char *pText, int nText,
    void *pCtx,
    int (*xToken)(void*, int, const char*, int, int, int)
  );

  int (*xPhraseCount)(Fts5Context*);
  int (*xPhraseSize)(Fts5Context*, int iPhrase);

  int (*xInstCount)(Fts5Context*, int *pnInst);
  int (*xInst)(Fts5Context*, int iIdx, int *piPhrase, int *piCol, int *piOff);

  sqlite3_int64 (*xRowid)(Fts5Context*);
  int (*xColumnText)(Fts5Context*, int iCol, const char **pz, int *pn);
  int (*xColumnSize)(Fts5Context*, int iCol, int *pnToken);

  int (*xQueryPhrase)(Fts5Context*, int iPhrase, void *pUserData,
    int(*)(const Fts5ExtensionApi*,Fts5Context*,void*)
  );
  int (*xSetAuxdata)(Fts5Context*, void *pAux, void(*xDelete)(void*));
  void *(*xGetAuxdata)(Fts5Context*, int bClear);

  int (*xPhraseFirst)(Fts5Context*, int iPhrase, Fts5PhraseIter*, int*, int*);
  void (*xPhraseNext)(Fts5Context*, Fts5PhraseIter*, int *piCol, int *piOff);

  int (*xPhraseFirstColumn)(Fts5Context*, int iPhrase, Fts5PhraseIter*, int*);
  void (*xPhraseNextColumn)(Fts5Context*, Fts5PhraseIter*, int *piCol);
};
# 11779 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct Fts5Tokenizer Fts5Tokenizer;
typedef struct fts5_tokenizer fts5_tokenizer;
struct fts5_tokenizer {
  int (*xCreate)(void*, const char **azArg, int nArg, Fts5Tokenizer **ppOut);
  void (*xDelete)(Fts5Tokenizer*);
  int (*xTokenize)(Fts5Tokenizer*,
      void *pCtx,
      int flags,
      const char *pText, int nText,
      int (*xToken)(
        void *pCtx,
        int tflags,
        const char *pToken,
        int nToken,
        int iStart,
        int iEnd
      )
  );
};


#define FTS5_TOKENIZE_QUERY 0x0001
#define FTS5_TOKENIZE_PREFIX 0x0002
#define FTS5_TOKENIZE_DOCUMENT 0x0004
#define FTS5_TOKENIZE_AUX 0x0008



#define FTS5_TOKEN_COLOCATED 0x0001
# 11816 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/sqlite3.h"
typedef struct fts5_api fts5_api;
struct fts5_api {
  int iVersion;


  int (*xCreateTokenizer)(
    fts5_api *pApi,
    const char *zName,
    void *pContext,
    fts5_tokenizer *pTokenizer,
    void (*xDestroy)(void*)
  );


  int (*xFindTokenizer)(
    fts5_api *pApi,
    const char *zName,
    void **ppContext,
    fts5_tokenizer *pTokenizer
  );


  int (*xCreateFunction)(
    fts5_api *pApi,
    const char *zName,
    void *pContext,
    fts5_extension_function xFunction,
    void (*xDestroy)(void*)
  );
};





#ifdef __cplusplus
}
#endif

#endif
