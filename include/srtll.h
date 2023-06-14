#pragma once
#include <stddef.h> /* size_t */
#include "dll.h"
typedef struct sorted_list sorted_list_t;

typedef struct sorted_list_iterator sorted_list_iterator_t;


struct sorted_list_iterator
{

	
	#ifndef NDEBUG
	const sorted_list_t *list;
	#endif

	
	dllist_iter_t dll_iter;
};


sorted_list_t *SortedLLCreate(int (*cmp_func)(const void *data1, const void *data2)); 


void SortedLLDestroy(sorted_list_t *list);

sorted_list_iterator_t SortedLLInsert(sorted_list_t *list, void *data);


sorted_list_iterator_t SortedLLRemove(sorted_list_iterator_t iter);


void *SortedLLPopFront(sorted_list_t *list);


void *SortedLLPopBack(sorted_list_t *list);

/* ITERATOR FUNCS */

sorted_list_iterator_t SortedLLBegin(const sorted_list_t *list);


sorted_list_iterator_t SortedLLEnd(const sorted_list_t *list);


sorted_list_iterator_t SortedLLNext(sorted_list_iterator_t iter);


sorted_list_iterator_t SortedLLPrev(sorted_list_iterator_t iter);


int SortedLLIsEqualIter(const sorted_list_iterator_t iter1, const sorted_list_iterator_t iter2);

/* UTILS FUNCS */

int SortedLLIsEmpty(const sorted_list_t *list);


size_t SortedLLSize(const sorted_list_t *list);

/* GETTERS AND SETTERS */


void *SortedLLGetData(const sorted_list_iterator_t iter);

/* ACTION FUNCTIONS */


int SortedLLForEach(const sorted_list_iterator_t from, const sorted_list_iterator_t to, int (*action_func)(void *data, void *params), void *params);


sorted_list_iterator_t SortedLLFind(const sorted_list_t *list, const sorted_list_iterator_t from, const sorted_list_iterator_t to, const void *data);


sorted_list_iterator_t SortedLLFindIf(const sorted_list_iterator_t from, const sorted_list_iterator_t to, int (*is_match)(const void *data, void *params), void *params);


sorted_list_t *SortedLLMerge(sorted_list_t *dest, sorted_list_t *src);





