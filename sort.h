#ifndef SORT_H
#define SORT_H
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: ptr to the previous element of the list
 * @next: ptr to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

void swap(int *x, int *y);
int partition(int array[], int lower, int upper, size_t size);
void quicksort_recusion(int array[], int lower, int upper, size_t size);

void shell_sort(int *array, size_t size);

#endif /* SORT_H */