# 1 "project/nginx/src/core/ngx_rwlock.h"







#ifndef _NGX_RWLOCK_H_INCLUDED_
#define _NGX_RWLOCK_H_INCLUDED_ 


#include <ngx_config.h>
#include <ngx_core.h>


void ngx_rwlock_wlock(ngx_atomic_t *lock);
void ngx_rwlock_rlock(ngx_atomic_t *lock);
void ngx_rwlock_unlock(ngx_atomic_t *lock);
void ngx_rwlock_downgrade(ngx_atomic_t *lock);


#endif
