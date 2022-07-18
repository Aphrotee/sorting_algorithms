#include "sort.h"

/**
 * selection_sort - selection sort algorithm
 * @array: array of integers to be sorted
 * @size: size of array
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	int a, b, c, x;
	size_t i, j, k;

	if (array == NULL || size <= 1)
		return;
	for (i = 0; i < size; i++)
	{
		if (i == size - 1)
			break;
		x = 0;
		b = i;
		a = array[i];
		for (j = i; j < size; j++)
		{
			if (a > array[j])
			{
				a = array[j];
				b = j;
				x = 1;
			}
		}
		c = array[i];
		array[i] = a;
		array[b] = c;
		if (x)
		{
			for (k = 0; k < size - 1; k++)
				printf("%d, ", array[k]);
			printf("%d\n", array[k]);
		}
	}
}
