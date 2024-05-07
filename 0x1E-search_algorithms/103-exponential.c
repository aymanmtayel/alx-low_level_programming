#include "search_algos.h"
#include <math.h>

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

int binary_search2(int *array, size_t size, int value)
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

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 */

int exponential_search(int *array, size_t size, int value)
{
	int *new_arry;
	size_t start, end, i = 1, new_size, ret_bin, nill = -1;

	if (size == 0)
		return (-1);
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	start = i / 2;
	end = (i < size) ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	new_arry = array + start;
	new_size = end - start + 1;
	ret_bin = binary_search2(new_arry, new_size, value);
	if (ret_bin != nill)
		return (ret_bin + start);
	return (-1);
}
