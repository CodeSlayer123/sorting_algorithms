#include <stdio.h>
#include <stdlib.h>
#include "sort.h"



void merge_sort(int *array, size_t size){
    int *temp;

	if (size < 2)
	{
		return;
	}
	temp = (int *)malloc((size) * sizeof(int));
	merge_sort_rec(array, 0, size - 1, temp);
	free(temp);
}
void merge_sort_rec(int *a, int l, int r, int *temp_left){
    if (l < r)
	{
		int mid = (l + r - 1) / 2;

		merge_sort_rec(a, l, mid, temp_left);
		merge_sort_rec(a, mid + 1, r, temp_left);
		merge_sorted_arrays(a, l, mid, r, temp_left);
	}
}

void merge_sorted_arrays(int *a, int l, int m, int r, int *temp_left){


    int i = l, j = m + 1, k = 0;
    int x;
    printf("Merging...\n");
    printf("[left]: ");
    for (x = i; x < j; x++)
	{
		printf("%d", a[x]);
		if (x < (j - 1))
        {
			printf(", ");
        }
	}
    printf("\n");
    printf("[right]: ");
    while (x < r + 1)
	{
		printf("%d", a[x]);
		if (x < r)
        {
			printf(", ");
        }
        x++;
	}
	printf("\n");
    while (i <= m && j <= r)
	{
		if (a[i] <= a[j])
		{
			temp_left[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp_left[k] = a[j];
			k++;
			j++;
		}
	}
	while (i <= m)
	{
		temp_left[k] = a[i];
		k++;
		i++;
	}
	while (j <= r)
	{
		temp_left[k] = a[j];
		k++;
		j++;
	}
	for (i = l; i <= r; i += 1)
	{
		a[i] = temp_left[i - l];
	}
    printf("[Done]: ");
    for (i = l; i <= r; i++)
	{
		a[i] = temp_left[i - l];
		printf("%d", a[i]);
		if (i != r)
			printf(", ");
		else
			printf("\n");
	}}

