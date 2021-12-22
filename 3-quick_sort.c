#include "sort.h"

/**
 * quick_sort - sorts array of integers using quick sort
 * @array: array
 * @size: size
 * Return: nothing
 */
int partition (int arr[], int low, int high);
void quicksort(int a[], int p, int r);
void swap(int *a, int *b);

void quick_sort(int *array, size_t size)
{
	int first = array[0];
	int last = array[size - 1];

	quicksort(array, first, last);
	print_array(array, size);
}

void quicksort(int array[], int first, int last)
{
	int q;

	if (first < last)
    {
        q = partition(array, first, last);
        quicksort(array, first, q - 1);
        quicksort(array, q + 1, last);
    }


}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];  // selecting last element as pivot
    int i = (low - 1);  // index of smaller element


    for (int j = low; j <= high- 1; j++)
    {
        // If the current element is smaller than or equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
	print_array(arr, arr[high + 1]);
	return (i + 1);
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
