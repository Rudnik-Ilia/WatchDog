#pragma once

#include <stddef.h> /* size_t */

typedef struct priority_queue pq_t;



pq_t *PQCreate(int(*priority_cmp_func)(const void *data1, const void *data2));


void PQDestroy(pq_t *pqueue);

int PQEnqueue(pq_t *pqueue, void *data);


void *PQDequeue(pq_t *pqueue);


void *PQPeek(const pq_t *pqueue);


int PQIsEmpty(const pq_t *pqueue);


size_t PQSize(const pq_t *pqueue);


pq_t *PQMerge(pq_t *dest, pq_t *src);

void PQFlush(pq_t *pqueue);


void *PQErase(pq_t *pqueue, int (*is_match)(const void *data, void *params), void *params);


