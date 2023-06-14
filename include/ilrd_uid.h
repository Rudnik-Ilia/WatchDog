#pragma once

#include <stddef.h> /* size_t */
#include <sys/types.h> /* pid_t, time_t */


typedef struct ilrd_uid ilrd_uid_t;

struct ilrd_uid
{
    size_t counter;
    pid_t pid;
    time_t created_time;
};

ilrd_uid_t UIDCreate(void);

int UIDIsSame(ilrd_uid_t uid1, ilrd_uid_t uid2);

extern const ilrd_uid_t BadUID;

