#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void merge_sort_rec(int *a, int l, int r, int *temp_left);
void merge_sorted_arrays(int *a, int l, int m, int r, int *temp_left);


void merge_sort(int *array, size_t size){
    if (size < 2){
        return;
    }
    if (array == NULL){
        return;
    }
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


    int i = l;
    int j = m + 1;
    int k = 0;


    while (i <= m && j <= r)
    {
        printf("%d\n", a[0]);
        print_array(a, 10);

        if (a[i] <= a[j])
        {
            temp_left[k] = a[i];
            i++;
            k++;
        }
        else{
            temp_left[k] = a[j];
            j++;
            k++;
        }
    }
    while (i < m){
        temp_left[k] = a[i];
        k++;
        i++;
    }
    while (j < r){
        temp_left[k] = a[i];
        k++;
        i++;
    }
    for (i = l; i < r; i ++)
        a[i] = temp_left[i - l];


}

