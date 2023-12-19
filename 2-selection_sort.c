#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending
 * @size: size of the array
 * @array: list with numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t i, index;
	int temp, temp_swap, flag = 0;

	if (array == NULL)
	return;

	for (i = 0; i < size; i++)
	{
		temp = i;
		flag = 0;
		for (index = i + 1; index < size; index++)
		{
			if (array[temp] > array[index])
			{
				temp = index;
				flag += 1;
			}
		}
		temp_swap = array[i];
		array[i] = array[temp];
		array[temp] = temp_swap;
		if (flag != 0)
			print_array(array, size);
	}
}
