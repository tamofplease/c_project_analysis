# 0 "project/mimikatz/modules/sqlite3.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/mimikatz/modules/sqlite3.h"
# 35 "project/mimikatz/modules/sqlite3.h"
# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 1 3 4
# 40 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4

# 40 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 99 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 36 "project/mimikatz/modules/sqlite3.h" 2
# 162 "project/mimikatz/modules/sqlite3.h"
 
# 162 "project/mimikatz/modules/sqlite3.h"
          extern const char sqlite3_version[];
 const char *sqlite3_libversion(void);
 const char *sqlite3_sourceid(void);
 int sqlite3_libversion_number(void);
# 190 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_compileoption_used(const char *zOptName);
 const char *sqlite3_compileoption_get(int N);
# 233 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_threadsafe(void);
# 249 "project/mimikatz/modules/sqlite3.h"
typedef struct sqlite3 sqlite3;
# 278 "project/mimikatz/modules/sqlite3.h"
  typedef long long int sqlite_int64;
  typedef unsigned long long int sqlite_uint64;

typedef sqlite_int64 sqlite3_int64;
typedef sqlite_uint64 sqlite3_uint64;
# 334 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_close(sqlite3*);
 int sqlite3_close_v2(sqlite3*);






typedef int (*sqlite3_callback)(void*,int,char**, char**);
# 406 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_exec(
  sqlite3*,
  const char *sql,
  int (*callback)(void*,int,char**,char**),
  void *,
  char **errmsg
);
# 677 "project/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_file sqlite3_file;
struct sqlite3_file {
  const struct sqlite3_io_methods *pMethods;
};
# 776 "project/mimikatz/modules/sqlite3.h"
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
# 1164 "project/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_mutex sqlite3_mutex;
# 1174 "project/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_api_routines sqlite3_api_routines;
# 1345 "project/mimikatz/modules/sqlite3.h"
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
# 1523 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_initialize(void);
 int sqlite3_shutdown(void);
 int sqlite3_os_init(void);
 int sqlite3_os_end(void);
# 1559 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_config(int, ...);
# 1578 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_db_config(sqlite3*, int op, ...);
# 1643 "project/mimikatz/modules/sqlite3.h"
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
# 2290 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_extended_result_codes(sqlite3*, int onoff);
# 2352 "project/mimikatz/modules/sqlite3.h"
 sqlite3_int64 sqlite3_last_insert_rowid(sqlite3*);
# 2362 "project/mimikatz/modules/sqlite3.h"
 void sqlite3_set_last_insert_rowid(sqlite3*,sqlite3_int64);
# 2420 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_changes(sqlite3*);
# 2457 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_total_changes(sqlite3*);
# 2494 "project/mimikatz/modules/sqlite3.h"
 void sqlite3_interrupt(sqlite3*);
# 2529 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_complete(const char *sql);
 int sqlite3_complete16(const void *sql);
# 2591 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_busy_handler(sqlite3*,int(*)(void*,int),void*);
# 2614 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_busy_timeout(sqlite3*, int ms);
# 2689 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_get_table(
  sqlite3 *db,
  const char *zSql,
  char ***pazResult,
  int *pnRow,
  int *pnColumn,
  char **pzErrmsg
);
 void sqlite3_free_table(char **result);
# 2739 "project/mimikatz/modules/sqlite3.h"
 char *sqlite3_mprintf(const char*,...);
 char *sqlite3_vmprintf(const char*, va_list);
 char *sqlite3_snprintf(int,char*,const char*, ...);
 char *sqlite3_vsnprintf(int,char*,const char*, va_list);
# 2832 "project/mimikatz/modules/sqlite3.h"
 void *sqlite3_malloc(int);
 void *sqlite3_malloc64(sqlite3_uint64);
 void *sqlite3_realloc(void*, int);
 void *sqlite3_realloc64(void*, sqlite3_uint64);
 void sqlite3_free(void*);
 sqlite3_uint64 sqlite3_msize(void*);
# 2862 "project/mimikatz/modules/sqlite3.h"
 sqlite3_int64 sqlite3_memory_used(void);
 sqlite3_int64 sqlite3_memory_highwater(int resetFlag);
# 2886 "project/mimikatz/modules/sqlite3.h"
 void sqlite3_randomness(int N, void *P);
# 2977 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_set_authorizer(
  sqlite3*,
  int (*xAuth)(void*,int,const char*,const char*,const char*,const char*),
  void *pUserData
);
# 3085 "project/mimikatz/modules/sqlite3.h"
 void *sqlite3_trace(sqlite3*,
   void(*xTrace)(void*,const char*), void*);
 void *sqlite3_profile(sqlite3*,
   void(*xProfile)(void*,const char*,sqlite3_uint64), void*);
# 3176 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_trace_v2(
  sqlite3*,
  unsigned uMask,
  int(*xCallback)(unsigned,void*,void*,void*),
  void *pCtx
);
# 3215 "project/mimikatz/modules/sqlite3.h"
 void sqlite3_progress_handler(sqlite3*, int, int(*)(void*), void*);
# 3444 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_open(
  const char *filename,
  sqlite3 **ppDb
);
 int sqlite3_open16(
  const void *filename,
  sqlite3 **ppDb
);
 int sqlite3_open_v2(
  const char *filename,
  sqlite3 **ppDb,
  int flags,
  const char *zVfs
);
# 3500 "project/mimikatz/modules/sqlite3.h"
 const char *sqlite3_uri_parameter(const char *zFilename, const char *zParam);
 int sqlite3_uri_boolean(const char *zFile, const char *zParam, int bDefault);
 sqlite3_int64 sqlite3_uri_int64(const char*, const char*, sqlite3_int64);
# 3557 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_errcode(sqlite3 *db);
 int sqlite3_extended_errcode(sqlite3 *db);
 const char *sqlite3_errmsg(sqlite3*);
 const void *sqlite3_errmsg16(sqlite3*);
 const char *sqlite3_errstr(int);
# 3587 "project/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_stmt sqlite3_stmt;
# 3629 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_limit(sqlite3*, int id, int newVal);
# 3839 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_prepare(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);
 int sqlite3_prepare_v2(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);
 int sqlite3_prepare_v3(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  unsigned int prepFlags,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);
 int sqlite3_prepare16(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
 int sqlite3_prepare16_v2(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
 int sqlite3_prepare16_v3(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  unsigned int prepFlags,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
# 3922 "project/mimikatz/modules/sqlite3.h"
 const char *sqlite3_sql(sqlite3_stmt *pStmt);
 char *sqlite3_expanded_sql(sqlite3_stmt *pStmt);
 const char *sqlite3_normalized_sql(sqlite3_stmt *pStmt);
# 3960 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_stmt_readonly(sqlite3_stmt *pStmt);
# 3972 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_stmt_isexplain(sqlite3_stmt *pStmt);
# 3993 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_stmt_busy(sqlite3_stmt*);
# 4035 "project/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_value sqlite3_value;
# 4049 "project/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_context sqlite3_context;
# 4169 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_bind_blob(sqlite3_stmt*, int, const void*, int n, void(*)(void*));
 int sqlite3_bind_blob64(sqlite3_stmt*, int, const void*, sqlite3_uint64,
                        void(*)(void*));
 int sqlite3_bind_double(sqlite3_stmt*, int, double);
 int sqlite3_bind_int(sqlite3_stmt*, int, int);
 int sqlite3_bind_int64(sqlite3_stmt*, int, sqlite3_int64);
 int sqlite3_bind_null(sqlite3_stmt*, int);
 int sqlite3_bind_text(sqlite3_stmt*,int,const char*,int,void(*)(void*));
 int sqlite3_bind_text16(sqlite3_stmt*, int, const void*, int, void(*)(void*));
 int sqlite3_bind_text64(sqlite3_stmt*, int, const char*, sqlite3_uint64,
                         void(*)(void*), unsigned char encoding);
 int sqlite3_bind_value(sqlite3_stmt*, int, const sqlite3_value*);
 int sqlite3_bind_pointer(sqlite3_stmt*, int, void*, const char*,void(*)(void*));
 int sqlite3_bind_zeroblob(sqlite3_stmt*, int, int n);
 int sqlite3_bind_zeroblob64(sqlite3_stmt*, int, sqlite3_uint64);
# 4204 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_bind_parameter_count(sqlite3_stmt*);
# 4232 "project/mimikatz/modules/sqlite3.h"
 const char *sqlite3_bind_parameter_name(sqlite3_stmt*, int);
# 4250 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_bind_parameter_index(sqlite3_stmt*, const char *zName);
# 4260 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_clear_bindings(sqlite3_stmt*);
# 4276 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_column_count(sqlite3_stmt *pStmt);
# 4305 "project/mimikatz/modules/sqlite3.h"
 const char *sqlite3_column_name(sqlite3_stmt*, int N);
 const void *sqlite3_column_name16(sqlite3_stmt*, int N);
# 4354 "project/mimikatz/modules/sqlite3.h"
 const char *sqlite3_column_database_name(sqlite3_stmt*,int);
 const void *sqlite3_column_database_name16(sqlite3_stmt*,int);
 const char *sqlite3_column_table_name(sqlite3_stmt*,int);
 const void *sqlite3_column_table_name16(sqlite3_stmt*,int);
 const char *sqlite3_column_origin_name(sqlite3_stmt*,int);
 const void *sqlite3_column_origin_name16(sqlite3_stmt*,int);
# 4391 "project/mimikatz/modules/sqlite3.h"
 const char *sqlite3_column_decltype(sqlite3_stmt*,int);
 const void *sqlite3_column_decltype16(sqlite3_stmt*,int);
# 4476 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_step(sqlite3_stmt*);
# 4497 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_data_count(sqlite3_stmt *pStmt);
# 4740 "project/mimikatz/modules/sqlite3.h"
 const void *sqlite3_column_blob(sqlite3_stmt*, int iCol);
 double sqlite3_column_double(sqlite3_stmt*, int iCol);
 int sqlite3_column_int(sqlite3_stmt*, int iCol);
 sqlite3_int64 sqlite3_column_int64(sqlite3_stmt*, int iCol);
 const unsigned char *sqlite3_column_text(sqlite3_stmt*, int iCol);
 const void *sqlite3_column_text16(sqlite3_stmt*, int iCol);
 sqlite3_value *sqlite3_column_value(sqlite3_stmt*, int iCol);
 int sqlite3_column_bytes(sqlite3_stmt*, int iCol);
 int sqlite3_column_bytes16(sqlite3_stmt*, int iCol);
 int sqlite3_column_type(sqlite3_stmt*, int iCol);
# 4777 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_finalize(sqlite3_stmt *pStmt);
# 4804 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_reset(sqlite3_stmt *pStmt);
# 4922 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_create_function(
  sqlite3 *db,
  const char *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*)
);
 int sqlite3_create_function16(
  sqlite3 *db,
  const void *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*)
);
 int sqlite3_create_function_v2(
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
 int sqlite3_create_window_function(
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
# 5022 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_aggregate_count(sqlite3_context*);
 int sqlite3_expired(sqlite3_stmt*);
 int sqlite3_transfer_bindings(sqlite3_stmt*, sqlite3_stmt*);
 int sqlite3_global_recover(void);
 void sqlite3_thread_cleanup(void);
 int sqlite3_memory_alarm(void(*)(void*,sqlite3_int64,int),
                      void*,sqlite3_int64);
# 5159 "project/mimikatz/modules/sqlite3.h"
 const void *sqlite3_value_blob(sqlite3_value*);
 double sqlite3_value_double(sqlite3_value*);
 int sqlite3_value_int(sqlite3_value*);
 sqlite3_int64 sqlite3_value_int64(sqlite3_value*);
 void *sqlite3_value_pointer(sqlite3_value*, const char*);
 const unsigned char *sqlite3_value_text(sqlite3_value*);
 const void *sqlite3_value_text16(sqlite3_value*);
 const void *sqlite3_value_text16le(sqlite3_value*);
 const void *sqlite3_value_text16be(sqlite3_value*);
 int sqlite3_value_bytes(sqlite3_value*);
 int sqlite3_value_bytes16(sqlite3_value*);
 int sqlite3_value_type(sqlite3_value*);
 int sqlite3_value_numeric_type(sqlite3_value*);
 int sqlite3_value_nochange(sqlite3_value*);
 int sqlite3_value_frombind(sqlite3_value*);
# 5185 "project/mimikatz/modules/sqlite3.h"
 unsigned int sqlite3_value_subtype(sqlite3_value*);
# 5201 "project/mimikatz/modules/sqlite3.h"
 sqlite3_value *sqlite3_value_dup(const sqlite3_value*);
 void sqlite3_value_free(sqlite3_value*);
# 5247 "project/mimikatz/modules/sqlite3.h"
 void *sqlite3_aggregate_context(sqlite3_context*, int nBytes);
# 5262 "project/mimikatz/modules/sqlite3.h"
 void *sqlite3_user_data(sqlite3_context*);
# 5274 "project/mimikatz/modules/sqlite3.h"
 sqlite3 *sqlite3_context_db_handle(sqlite3_context*);
# 5333 "project/mimikatz/modules/sqlite3.h"
 void *sqlite3_get_auxdata(sqlite3_context*, int N);
 void sqlite3_set_auxdata(sqlite3_context*, int N, void*, void (*)(void*));
# 5351 "project/mimikatz/modules/sqlite3.h"
typedef void (*sqlite3_destructor_type)(void*);
# 5481 "project/mimikatz/modules/sqlite3.h"
 void sqlite3_result_blob(sqlite3_context*, const void*, int, void(*)(void*));
 void sqlite3_result_blob64(sqlite3_context*,const void*,
                           sqlite3_uint64,void(*)(void*));
 void sqlite3_result_double(sqlite3_context*, double);
 void sqlite3_result_error(sqlite3_context*, const char*, int);
 void sqlite3_result_error16(sqlite3_context*, const void*, int);
 void sqlite3_result_error_toobig(sqlite3_context*);
 void sqlite3_result_error_nomem(sqlite3_context*);
 void sqlite3_result_error_code(sqlite3_context*, int);
 void sqlite3_result_int(sqlite3_context*, int);
 void sqlite3_result_int64(sqlite3_context*, sqlite3_int64);
 void sqlite3_result_null(sqlite3_context*);
 void sqlite3_result_text(sqlite3_context*, const char*, int, void(*)(void*));
 void sqlite3_result_text64(sqlite3_context*, const char*,sqlite3_uint64,
                           void(*)(void*), unsigned char encoding);
 void sqlite3_result_text16(sqlite3_context*, const void*, int, void(*)(void*));
 void sqlite3_result_text16le(sqlite3_context*, const void*, int,void(*)(void*));
 void sqlite3_result_text16be(sqlite3_context*, const void*, int,void(*)(void*));
 void sqlite3_result_value(sqlite3_context*, sqlite3_value*);
 void sqlite3_result_pointer(sqlite3_context*, void*,const char*,void(*)(void*));
 void sqlite3_result_zeroblob(sqlite3_context*, int n);
 int sqlite3_result_zeroblob64(sqlite3_context*, sqlite3_uint64 n);
# 5517 "project/mimikatz/modules/sqlite3.h"
 void sqlite3_result_subtype(sqlite3_context*,unsigned int);
# 5599 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_create_collation(
  sqlite3*,
  const char *zName,
  int eTextRep,
  void *pArg,
  int(*xCompare)(void*,int,const void*,int,const void*)
);
 int sqlite3_create_collation_v2(
  sqlite3*,
  const char *zName,
  int eTextRep,
  void *pArg,
  int(*xCompare)(void*,int,const void*,int,const void*),
  void(*xDestroy)(void*)
);
 int sqlite3_create_collation16(
  sqlite3*,
  const void *zName,
  int eTextRep,
  void *pArg,
  int(*xCompare)(void*,int,const void*,int,const void*)
);
# 5649 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_collation_needed(
  sqlite3*,
  void*,
  void(*)(void*,sqlite3*,int eTextRep,const char*)
);
 int sqlite3_collation_needed16(
  sqlite3*,
  void*,
  void(*)(void*,sqlite3*,int eTextRep,const void*)
);
# 5732 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_sleep(int);
# 5790 "project/mimikatz/modules/sqlite3.h"
 extern char *sqlite3_temp_directory;
# 5827 "project/mimikatz/modules/sqlite3.h"
 extern char *sqlite3_data_directory;
# 5848 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_win32_set_directory(
  unsigned long type,
  void *zValue
);
 int sqlite3_win32_set_directory8(unsigned long type, const char *zValue);
 int sqlite3_win32_set_directory16(unsigned long type, const void *zValue);
# 5886 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_get_autocommit(sqlite3*);
# 5899 "project/mimikatz/modules/sqlite3.h"
 sqlite3 *sqlite3_db_handle(sqlite3_stmt*);
# 5916 "project/mimikatz/modules/sqlite3.h"
 const char *sqlite3_db_filename(sqlite3 *db, const char *zDbName);
# 5926 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_db_readonly(sqlite3 *db, const char *zDbName);
# 5942 "project/mimikatz/modules/sqlite3.h"
 sqlite3_stmt *sqlite3_next_stmt(sqlite3 *pDb, sqlite3_stmt *pStmt);
# 5991 "project/mimikatz/modules/sqlite3.h"
 void *sqlite3_commit_hook(sqlite3*, int(*)(void*), void*);
 void *sqlite3_rollback_hook(sqlite3*, void(*)(void *), void*);
# 6043 "project/mimikatz/modules/sqlite3.h"
 void *sqlite3_update_hook(
  sqlite3*,
  void(*)(void *,int ,char const *,char const *,sqlite3_int64),
  void*
);
# 6084 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_enable_shared_cache(int);
# 6100 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_release_memory(int);
# 6114 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_db_release_memory(sqlite3*);
# 6167 "project/mimikatz/modules/sqlite3.h"
 sqlite3_int64 sqlite3_soft_heap_limit64(sqlite3_int64 N);
# 6178 "project/mimikatz/modules/sqlite3.h"
 void sqlite3_soft_heap_limit(int N);
# 6250 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_table_column_metadata(
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
# 6306 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_load_extension(
  sqlite3 *db,
  const char *zFile,
  const char *zProc,
  char **pzErrMsg
);
# 6338 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_enable_load_extension(sqlite3 *db, int onoff);
# 6376 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_auto_extension(void(*xEntryPoint)(void));
# 6388 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_cancel_auto_extension(void(*xEntryPoint)(void));







 void sqlite3_reset_auto_extension(void);
# 6410 "project/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_vtab sqlite3_vtab;
typedef struct sqlite3_index_info sqlite3_index_info;
typedef struct sqlite3_vtab_cursor sqlite3_vtab_cursor;
typedef struct sqlite3_module sqlite3_module;
# 6431 "project/mimikatz/modules/sqlite3.h"
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
# 6565 "project/mimikatz/modules/sqlite3.h"
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
# 6662 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_create_module(
  sqlite3 *db,
  const char *zName,
  const sqlite3_module *p,
  void *pClientData
);
 int sqlite3_create_module_v2(
  sqlite3 *db,
  const char *zName,
  const sqlite3_module *p,
  void *pClientData,
  void(*xDestroy)(void*)
);
# 6688 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_drop_modules(
  sqlite3 *db,
  const char **azKeep
);
# 6711 "project/mimikatz/modules/sqlite3.h"
struct sqlite3_vtab {
  const sqlite3_module *pModule;
  int nRef;
  char *zErrMsg;

};
# 6735 "project/mimikatz/modules/sqlite3.h"
struct sqlite3_vtab_cursor {
  sqlite3_vtab *pVtab;

};
# 6748 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_declare_vtab(sqlite3*, const char *zSQL);
# 6767 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_overload_function(sqlite3*, const char *zFuncName, int nArg);
# 6791 "project/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_blob sqlite3_blob;
# 6876 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_blob_open(
  sqlite3*,
  const char *zDb,
  const char *zTable,
  const char *zColumn,
  sqlite3_int64 iRow,
  int flags,
  sqlite3_blob **ppBlob
);
# 6909 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_blob_reopen(sqlite3_blob *, sqlite3_int64);
# 6932 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_blob_close(sqlite3_blob *);
# 6948 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_blob_bytes(sqlite3_blob *);
# 6977 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_blob_read(sqlite3_blob *, void *Z, int N, int iOffset);
# 7019 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_blob_write(sqlite3_blob *, const void *z, int n, int iOffset);
# 7050 "project/mimikatz/modules/sqlite3.h"
 sqlite3_vfs *sqlite3_vfs_find(const char *zVfsName);
 int sqlite3_vfs_register(sqlite3_vfs*, int makeDflt);
 int sqlite3_vfs_unregister(sqlite3_vfs*);
# 7168 "project/mimikatz/modules/sqlite3.h"
 sqlite3_mutex *sqlite3_mutex_alloc(int);
 void sqlite3_mutex_free(sqlite3_mutex*);
 void sqlite3_mutex_enter(sqlite3_mutex*);
 int sqlite3_mutex_try(sqlite3_mutex*);
 void sqlite3_mutex_leave(sqlite3_mutex*);
# 7239 "project/mimikatz/modules/sqlite3.h"
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
# 7282 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_mutex_held(sqlite3_mutex*);
 int sqlite3_mutex_notheld(sqlite3_mutex*);
# 7323 "project/mimikatz/modules/sqlite3.h"
 sqlite3_mutex *sqlite3_db_mutex(sqlite3*);
# 7366 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_file_control(sqlite3*, const char *zDbName, int op, void*);
# 7385 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_test_control(int op, ...);
# 7475 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_keyword_count(void);
 int sqlite3_keyword_name(int,const char**,int*);
 int sqlite3_keyword_check(const char*,int);
# 7495 "project/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_str sqlite3_str;
# 7522 "project/mimikatz/modules/sqlite3.h"
 sqlite3_str *sqlite3_str_new(sqlite3*);
# 7537 "project/mimikatz/modules/sqlite3.h"
 char *sqlite3_str_finish(sqlite3_str*);
# 7571 "project/mimikatz/modules/sqlite3.h"
 void sqlite3_str_appendf(sqlite3_str*, const char *zFormat, ...);
 void sqlite3_str_vappendf(sqlite3_str*, const char *zFormat, va_list);
 void sqlite3_str_append(sqlite3_str*, const char *zIn, int N);
 void sqlite3_str_appendall(sqlite3_str*, const char *zIn);
 void sqlite3_str_appendchar(sqlite3_str*, int N, char C);
 void sqlite3_str_reset(sqlite3_str*);
# 7607 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_str_errcode(sqlite3_str*);
 int sqlite3_str_length(sqlite3_str*);
 char *sqlite3_str_value(sqlite3_str*);
# 7637 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_status(int op, int *pCurrent, int *pHighwater, int resetFlag);
 int sqlite3_status64(
  int op,
  sqlite3_int64 *pCurrent,
  sqlite3_int64 *pHighwater,
  int resetFlag
);
# 7747 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_db_status(sqlite3*, int op, int *pCur, int *pHiwtr, int resetFlg);
# 7900 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_stmt_status(sqlite3_stmt*, int op,int resetFlg);
# 7976 "project/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_pcache sqlite3_pcache;
# 7988 "project/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_pcache_page sqlite3_pcache_page;
struct sqlite3_pcache_page {
  void *pBuf;
  void *pExtra;
};
# 8153 "project/mimikatz/modules/sqlite3.h"
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
# 8202 "project/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_backup sqlite3_backup;
# 8390 "project/mimikatz/modules/sqlite3.h"
 sqlite3_backup *sqlite3_backup_init(
  sqlite3 *pDest,
  const char *zDestName,
  sqlite3 *pSource,
  const char *zSourceName
);
 int sqlite3_backup_step(sqlite3_backup *p, int nPage);
 int sqlite3_backup_finish(sqlite3_backup *p);
 int sqlite3_backup_remaining(sqlite3_backup *p);
 int sqlite3_backup_pagecount(sqlite3_backup *p);
# 8516 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_unlock_notify(
  sqlite3 *pBlocked,
  void (*xNotify)(void **apArg, int nArg),
  void *pNotifyArg
);
# 8531 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_stricmp(const char *, const char *);
 int sqlite3_strnicmp(const char *, const char *, int);
# 8549 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_strglob(const char *zGlob, const char *zStr);
# 8572 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_strlike(const char *zGlob, const char *zStr, unsigned int cEsc);
# 8595 "project/mimikatz/modules/sqlite3.h"
 void sqlite3_log(int iErrCode, const char *zFormat, ...);
# 8631 "project/mimikatz/modules/sqlite3.h"
 void *sqlite3_wal_hook(
  sqlite3*,
  int(*)(void *,sqlite3*,const char*,int),
  void*
);
# 8666 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_wal_autocheckpoint(sqlite3 *db, int N);
# 8688 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_wal_checkpoint(sqlite3 *db, const char *zDb);
# 8782 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_wal_checkpoint_v2(
  sqlite3 *db,
  const char *zDb,
  int eMode,
  int *pnLog,
  int *pnCkpt
);
# 8818 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_vtab_config(sqlite3*, int op, ...);
# 8872 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_vtab_on_conflict(sqlite3 *);
# 8891 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_vtab_nochange(sqlite3_context*);
# 8906 "project/mimikatz/modules/sqlite3.h"
 const char *sqlite3_vtab_collation(sqlite3_index_info*,int);
# 9011 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_stmt_scanstatus(
  sqlite3_stmt *pStmt,
  int idx,
  int iScanStatusOp,
  void *pOut
);
# 9027 "project/mimikatz/modules/sqlite3.h"
 void sqlite3_stmt_scanstatus_reset(sqlite3_stmt*);
# 9059 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_db_cacheflush(sqlite3*);
# 9173 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_system_errno(sqlite3*);
# 9195 "project/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_snapshot {
  unsigned char hidden[48];
} sqlite3_snapshot;
# 9242 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_snapshot_get(
  sqlite3 *db,
  const char *zSchema,
  sqlite3_snapshot **ppSnapshot
);
# 9291 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_snapshot_open(
  sqlite3 *db,
  const char *zSchema,
  sqlite3_snapshot *pSnapshot
);
# 9308 "project/mimikatz/modules/sqlite3.h"
 void sqlite3_snapshot_free(sqlite3_snapshot*);
# 9335 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_snapshot_cmp(
  sqlite3_snapshot *p1,
  sqlite3_snapshot *p2
);
# 9363 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_snapshot_recover(sqlite3 *db, const char *zDb);
# 9401 "project/mimikatz/modules/sqlite3.h"
 unsigned char *sqlite3_serialize(
  sqlite3 *db,
  const char *zSchema,
  sqlite3_int64 *piSize,
  unsigned int mFlags
);
# 9453 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_deserialize(
  sqlite3 *db,
  const char *zSchema,
  unsigned char *pData,
  sqlite3_int64 szDb,
  sqlite3_int64 szBuf,
  unsigned mFlags
);
# 9522 "project/mimikatz/modules/sqlite3.h"
typedef struct sqlite3_rtree_geometry sqlite3_rtree_geometry;
typedef struct sqlite3_rtree_query_info sqlite3_rtree_query_info;







  typedef double sqlite3_rtree_dbl;
# 9540 "project/mimikatz/modules/sqlite3.h"
 int sqlite3_rtree_geometry_callback(
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







 int sqlite3_rtree_query_callback(
  sqlite3 *db,
  const char *zQueryFunc,
  int (*xQueryFunc)(sqlite3_rtree_query_info*),
  void *pContext,
  void (*xDestructor)(void*)
);
# 9584 "project/mimikatz/modules/sqlite3.h"
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
# 11317 "project/mimikatz/modules/sqlite3.h"
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
# 11545 "project/mimikatz/modules/sqlite3.h"
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
# 11779 "project/mimikatz/modules/sqlite3.h"
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
# 11816 "project/mimikatz/modules/sqlite3.h"
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
