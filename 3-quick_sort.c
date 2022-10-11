#include "sort.h"

/**
 * partition - finds the partition for the quicksort using the Lomuto scheme
 * @array: array to sort
 * @lo: lowest index of the partition to sort
 * @hi: highest index of the partition to sort
 * @size: size of the array
 *
 * Return: index of the partition
 */
size_t partition(int *array, int lo, int hi, size_t size)
{
	int pivot, boundary, temp;
	int i;

	pivot = array[hi];
	boundary = lo - 1;

	for (i = lo; i <= hi; i++)
		if (array[i] <= pivot)
		{
			boundary++;
			temp = array[i];
			array[i] = array[boundary];
			array[boundary] = temp;
			print_array(array, size);
		}
	return ((size_t)boundary);
}

/**
 * sort - sorts a partition of an array of integers
 * @array: array to sort
 * @lo: lowest index of the partition to sort
 * @hi: highest index of the partition to sort
 * @size: size of the array
 *
 * Return: void
 */
void sort(int *array, int lo, int hi, size_t size)
{
	int boundary;

	if (lo < hi)
	{
		boundary = partition(array, lo, hi, size);
		sort(array, lo, boundary - 1, size);
		sort(array, boundary + 1, hi, size);

	}
}

/**
 * quick_sort - sorts an array of integers in ascending order using the
 * Quick sort algorithm
 * @array: The array to sort
 * @size: The size of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	sort(array, 0, size - 1, size);
}




