#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void merge_sort_rec(int *a, int l, int r, int *temp_left);
void merge_sorted_arrays(int *a, int l, int m, int r, int *temp_left);


void merge_sort(int *array, size_t size){
    int *temp_left = malloc(size * sizeof(int));

    printf("%ld", size);
    merge_sort_rec(array, 0, size - 1, temp_left);
    free(temp_left);
}
void merge_sort_rec(int *a, int l, int r, int *temp_left){
    if (l < r)
    {

        int m = l + (r -l) / 2;
        merge_sort_rec(a, l, m, temp_left);
        merge_sort_rec(a, m + 1, r, temp_left);
        merge_sorted_arrays(a,l,m,r, temp_left);
    }
}

void merge_sorted_arrays(int *a, int l, int m, int r, int *temp_left){
    int left_length = m - l + 1;
    int right_length = r - m;

    int i, j, k;


    for (i = 0; i < left_length; i++)
        temp_left[i] = a[l + i];


    for (i = 0, j = 0, k = l; k < r; k++)
    {
        printf("%d\n", a[0]);
        print_array(a, 10);


        if (i < left_length && j >= right_length )
        {
            a[k] = temp_left[i];
            i++;
        }
        else{
            j++;
        }
    }
}

