#pragma once 

#include <stddef.h> /* size_t */
#include <time.h>  /* time_t */

typedef enum status
{
    WD_SUCCESS,
    WD_FORK_FAILURE,
    WD_EXEC_FAILURE,
    WD_PTHREAD_CREATE_FAILURE
}wd_status_t;

/* NB: SIGUSR1 & SIGUSR2 signals are reserved for the watchdog*/


wd_status_t KeepMeAlive(int argc, const char *argv[], time_t interval, size_t threshold);

void DoNotResuscitate();

