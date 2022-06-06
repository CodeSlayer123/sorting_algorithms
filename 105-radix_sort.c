
#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int big(int ar[], int size) {
    int tmp = 0;
    int i;
    for (i = 0; i < size; i++) {
        if (ar[i]> tmp){
            tmp = ar[i];
        }
    }

    return tmp;
}

void countSort (int ar[], int size, int exp, int *count, int *result) {
    int lsd;
    int i, index;

    
    for (i = 0; i < size; i++) {
        count[i] = 0;
    }

    for (i = 0; i < size; i++) {
        lsd = (ar[i] / exp) % 10;
        count[lsd]++;
    }
    for (i = 1; i < size; i++) {
        count[i] += count[i-1];

    }



    for (i = size - 1; i >= 0; i--) {
        lsd = (ar[i] / exp) % 10;
        index = count[lsd] - 1;
        result[index] = ar[i];
        count[(ar[i] / exp) % 10]--;
    }




    for (i = 0; i < size; i++) {
        ar[i] = result[i];
    }
}


void radix_sort(int *array, size_t size){


    int m = big(array, size);
    int i = 0;

    int *count = malloc(size * sizeof(int));
    int *result = malloc(sizeof(int) * size);

    for (i = 1; m / i > 0; i = i * 10) {
        countSort(array, size, i, count, result);
        print_array(array, size);
}

    free(count);
    free(result);
}