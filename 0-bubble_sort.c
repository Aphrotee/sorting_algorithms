#include "sort.h"

/**
 * bubble_sort - bubble sort algorithm
 * @array: array of integers to be sorted
 * @size: size of array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, n;
	int a;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				a = array[j + 1];
				array[j + 1] = array[j];
				array[j] = a;
				for (n = 0; n < size - 1 ; n++)
					printf("%d, ", array[n]);
				printf("%d\n", array[n]);
			}
		}
	}
}
