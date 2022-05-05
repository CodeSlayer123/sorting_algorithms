#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void merge_sort_rec(int *a, int l, int r);
void merge_sorted_arrays(int *a, int l, int m, int r);


void merge_sort(int *array, size_t size){
    printf("%ld", size);
    merge_sort_rec(array, 0, size - 1);
}
void merge_sort_rec(int *a, int l, int r){
    if (l < r)
    {

        int m = l + (r -l) / 2;
        merge_sort_rec(a, l, m);
        merge_sort_rec(a, m + 1, r);
        merge_sorted_arrays(a,l,m,r);
    }
}

void merge_sorted_arrays(int *a, int l, int m, int r){
    int left_length = m - l + 1;
    int right_length = r - m;

    int temp_left[left_length];
    int temp_right[right_length];
    int i, j, k;


    for (int i = 0; i < left_length; i++)
        temp_left[i] = a[l + i];

    for (int i = 0; i < right_length; i++)
        temp_right[i] = a[m + 1 + i];

    for (i = 0, j = 0, k = l; k < r; k++)
    {
        printf("%d\n", a[0]);
        print_array(a, 10);


        if ((i < left_length) && (j >= right_length || temp_left[i] <= temp_right[j]))
        {
            a[k] = temp_left[i];
            i++;
        }
        else{
            a[k] = temp_right[j];
            j++;
        }
    }
}

