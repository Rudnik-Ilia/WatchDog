#pragma once

#include <time.h> /* time_t */

#include "ilrd_uid.h" /* ilrd_uid_t */

typedef struct task task_t;


task_t *TaskCreate(ilrd_uid_t uid, time_t interval, int is_repeating, int (*task_func)(void *params), void *params);

void TaskDestroy(task_t *task);


int TaskExecute(task_t *task);


time_t TaskGetTime(task_t *task);

void TaskCalculateNewTime(task_t *task);


int TaskIsRepeating(task_t *task);


ilrd_uid_t TaskGetUID(task_t *task);

/**************************************************************************************************/

time_t TaskGetInterval(task_t *task);


time_t TaskSetInterval(task_t *task, time_t new_interval);


void TaskSetONRepeat(task_t *task);


void TaskSetOFFRepeat(task_t *task);


size_t TaskGetLap(task_t *task);


