#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

int partition(int arr[], int low, int high, size_t size);
void quickSort(int arr[], int low, int high, size_t size);
void swap(int *a, int *b);

void merge_sort(int *array, size_t size);
void merge_sort_rec(int *a, int l, int r, int *temp_left);
void merge_sorted_arrays(int *a, int l, int m, int r, int *temp_left);

void heap_sort(int *array, size_t size);
void maxheapify(int a[], int n, int i, size_t size);

void radix_sort(int *array, size_t size);
int big(int ar[], int size);
void countSort (int ar[], int size, int exp, int *count, int *result);

#endif
