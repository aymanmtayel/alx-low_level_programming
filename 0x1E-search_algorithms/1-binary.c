#include "search_algos.h"

/**
 * curr_array - prints current array
 * @array: array to be used
 * @l: left side
 * @r: right side
 * Return: void
 */

void curr_array(int *array, size_t l, size_t r)
{
	size_t i;

	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i < r)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: the index where value is located, -1 if array is NULL or value
 * is not available
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m;

	if (array == NULL || size == 0 || !value)
		return (-1);

	while (l <= r)
	{
		m = (l + r) / 2;
		printf("Searching in array: ");
		curr_array(array, l, r);
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
