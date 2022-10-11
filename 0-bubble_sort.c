#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 *
 * @array: Pointer to the beginning of an array
 * @size: The size of the array
 *
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t isSorted, i, j, temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		isSorted = 1;
		for (j = 1; j < size - i; j++)
		{
			if (array[j] < array[j - 1])
			{
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
				print_array(array, size);
				isSorted = 0;
			}
		}

		if (isSorted == 1)
			return;
	}
}

