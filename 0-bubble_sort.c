#include "sort.h"

/**
 * bubble_sort - sorts array of integers in ascending order using bubble sort
 * @array: array
 * @size: size
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp;
	int flag = 0;

	if (size < 2)
		return;
	while (flag == 0)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);

				flag = 1;
			}
		}
		if (flag == 0)
			break;
		flag = 0;
		i = 0;
	}
}
