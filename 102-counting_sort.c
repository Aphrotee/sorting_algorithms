#include "sort.h"

/**
 * counting_sort - quick sort algorithm
 * @array: array of integers to be sorted
 * @size: size of array
 *
 * Return: Nothing
 */
void counting_sort(int *array, size_t size)
{
	size_t i, j, k, s, si = 0, countsize;
	int a, n, m, *count, *sorted;

	if (!array || size <= 1)
		return;
	sorted = (int *)malloc(sizeof(array));
	k = 0;
	for (i = 1; i < size; i++)
		if (array[i] > array[k])
			k = i;

	countsize = array[k] + 1;
	count = (int *)malloc(countsize);
	a = 0;
	m = 0;
	for (i = 0; i < size; i++)
	{
		s = k;
		for (j = 0; j < size; j++)
		{
			if (array[j] <= array[s])
				s = j;
		}

		if (array[s] == 0)
		{
			sorted[0] = a;
			si = 1;
		}
		for (n = m; n < array[s]; n++)
			count[n] = a;

		count[n] = a;
		array[s] = array[k];
		m = n;
		a++;
	}

	count[n] = a;
	print_array(count, countsize);
	s = 1;
	while (s < countsize + 1)
	{
		if (count[s] != count[s - 1])
		{
			sorted[si] = s;
			si++;
		}
		s++;
	}

	for (i = 0; i < size; i++)
		array[i] = sorted[i];
}
