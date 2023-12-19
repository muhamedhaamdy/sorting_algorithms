#include "sort.h"

/**
 * swap - swap two elements
 * @a : the first element
 * @b : the second element
*/

void swap(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - sort the array by bubble sort algo
 * @array : the unsorted array
 * @size : the size of the array
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j, swapped = 0;

	if (!array || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swapped = 1;
			}
		}
	if (!swapped)
		break;
	}
}
