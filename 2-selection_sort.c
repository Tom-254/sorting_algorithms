#include "sort.h"

/**
 * selection_sort - sorts an array using the selection sort algorithm
 *
 * @array: pointer to integer array
 * @size: size of array
 *
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, minIndex, temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		minIndex = i;
		for (j = i; j < size; j++)
			if (array[j] < array[minIndex])
				minIndex = j;
		temp = array[minIndex];
		array[minIndex] = array[i];
		array[i] = temp;
		print_array(array, size);
	}
}
