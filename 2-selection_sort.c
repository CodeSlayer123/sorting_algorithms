#include "sort.h"

/**
 * selection_sort - sorts array of integers using selection sort
 * @array: array
 * @size: size
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t jMin;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		jMin = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[jMin])
			{
				jMin = j;
			}
		}

		if (jMin != i)
		{
			tmp = array[i];
			array[i] = array[jMin];
			array[jMin] = tmp;
			print_array(array, size);
		}
	}
}
