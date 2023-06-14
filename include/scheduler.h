#pragma once

#include <stddef.h> /* size_t */
#include <time.h>  /* time_t */

#include "ilrd_uid.h" /* ilrd_uid_t */



typedef struct scheduler sched_t;


sched_t *SchedCreate(void);


void SchedDestroy(sched_t *sched);

ilrd_uid_t SchedAddTask(sched_t *sched, time_t interval_in_sec, int is_repeating, int (*task_func)(void *params), void *params);


void SchedRemoveTask(sched_t *sched, ilrd_uid_t uid);


int SchedRun(sched_t *sched);


void SchedStop(sched_t *sched);


size_t SchedSize(const sched_t *sched);


int SchedIsEmpty(const sched_t *sched);


void SchedClear(sched_t *sched);


