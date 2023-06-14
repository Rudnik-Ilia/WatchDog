#pragma once
#include <stddef.h> /* size_t */


typedef struct dllist dllist_t;
typedef struct dll_node *dllist_iter_t;


dllist_t *SpecialDLLCreate(void);

dllist_t *DLLCreate(void);

void DLLDestroy(dllist_t *list);


dllist_iter_t DLLPushFront(dllist_t *list, void *data);


dllist_iter_t DLLPushBack(dllist_t *list, void *data);


dllist_iter_t DLLInsert(dllist_iter_t iter, void *data);


dllist_iter_t DLLRemove(dllist_iter_t iter);


void *DLLPopFront(dllist_t *list);


void *DLLPopBack(dllist_t *list);


/* UTILITY FUNCS */

size_t DLLSize(const dllist_t *list);


int DLLIsEmpty(const dllist_t *list);


/* ITERATOR FUNCS */

dllist_iter_t DLLBegin(const dllist_t *list);

dllist_iter_t DLLEnd(const dllist_t *list);


dllist_iter_t DLLNext(const dllist_iter_t iter);


dllist_iter_t DLLPrev(const dllist_iter_t iter);


int DLLIsEqualIter(const dllist_iter_t iter1, const dllist_iter_t iter2);


/* GETTERS AND SETTERS */

void DLLSetData(dllist_iter_t iter, void *data);


void *DLLGetData(const dllist_iter_t iter);


/* ACTION FUNCS */


dllist_iter_t DLLFind(const dllist_iter_t from, const dllist_iter_t to, int (*is_match_func)(const void *data, void *params), void *param);


 
int DLLForEach(const dllist_iter_t from, const dllist_iter_t to, int (*action_func)(void *data, void *params), void *param);

void DLLSplice(dllist_iter_t from, dllist_iter_t to, dllist_iter_t dest);


int DLLMultiFind(const dllist_iter_t from, const dllist_iter_t to, int (*is_match_func)(const void *data, void *params), void *param, dllist_t *output_list);


