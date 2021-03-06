# 1 "project/ish/fs/fake-migrate.c"
#include "kernel/fs.h"
#include "debug.h"
#include "kernel/errno.h"
#include "fs/fake-db.h"
#include "fs/sqlutil.h"



#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
static struct migration {
    const char *sql;
    void (*migrate)(struct fakefs_db *fs);
} migrations[] = {

    {
        "create index inode_to_path on paths (inode, path);"
    },

    {
        "create table paths_new (path blob primary key, inode integer references stats(inode));"
        "insert into paths_new select * from paths where exists (select 1 from stats where inode = paths.inode);"
        "drop table paths; alter table paths_new rename to paths;"
        "create index inode_to_path on paths (inode, path);"
        "delete from stats where not exists (select 1 from paths where inode = stats.inode);"
        "create trigger delete_path after delete on paths "
        "when not exists (select 1 from paths where inode = old.inode) "
        "begin "
            "delete from stats where not exists (select 1 from paths where inode = old.inode) and inode = old.inode; "
        "end;"
    },

    {
        "drop trigger delete_path"
    },
};

int fakefs_migrate(struct fakefs_db *fs, int UNUSED(root_fd)) {
    sqlite3 *db = fs->db;
    int err;
    sqlite3_stmt *user_version = PREPARE("pragma user_version");
    STEP(user_version);
    int version = sqlite3_column_int(user_version, 0);
    FINALIZE(user_version);

    EXEC("begin");
    int versions = sizeof(migrations)/sizeof(migrations[0]);
    while (version < versions) {
        struct migration m = migrations[version];
        if (m.sql != NULL)
            EXEC(m.sql);
        if (m.migrate != NULL)
            m.migrate(fs);
        version++;
    }

    char *pragma_user_version = sqlite3_mprintf("pragma user_version = %d", version);
    EXEC(pragma_user_version);
    sqlite3_free(pragma_user_version);
    EXEC("commit");

    return 0;
}
