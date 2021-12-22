#include "sort.h"
/**
 * quick_sort - sorts array of integers using quick sort
 * @array: array
 * @size: size
 * Return: nothing
 */

void quick_sort(int *array, size_t size)
{

	quickSort(array, 0, size - 1, size);
}

void quickSort(int arr[], int low, int high, size_t size)
{
	if (low < high)
	{
		int pi = partition(arr, low, high, size);
		quickSort(arr, low, pi - 1, size);
		quickSort(arr, pi + 1, high, size);
	}
}
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int partition (int arr[], int low, int high, size_t size)
{
	int pivot = arr[high];
	int i = (low - 1);
	int tmp;

	for (int j = low; j <= high- 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			tmp = arr[i];
			swap(&arr[i], &arr[j]);
			if (arr[i] != tmp)
				print_array(arr, size);
		}
	}
	tmp = arr[i + 1];
	swap(&arr[i + 1], &arr[high]);
	if (arr[i + 1] != tmp)
		print_array(arr, size);
	return (i + 1);
}
