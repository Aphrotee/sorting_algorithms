#include "sort.h"

/**
 * partition - quick sort parition algorithm
 * @array: array of integers to be sorted
 * @low: starting point of comparison
 * @high: pivot index
 * @size: size of array
 *
 * Return: Nothing
 */
int partition(int *array, int low, int high, size_t size)
{
	int i = low - 1;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= array[high])
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap(&array[j], &array[i + 1]);
	/*print_array(array, size);*/

	return (i + 1);
}
/**
 * quicksort - quick sort algorithm
 * @array: array of integers to be sorted
 * @low: starting point of comparison
 * @high: pivot index
 * @size: size of array
 *
 * Return: Nothing
 */
void quicksort(int *array, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = partition(array, low, high, size);

		quicksort(array, low, p - 1, size);
		quicksort(array, p + 1, high, size);
	}
}
/**
 * quick_sort - quick sort algorithm
 * @array: array of integers to be sorted
 * @size: size of array
 *
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size);
}
