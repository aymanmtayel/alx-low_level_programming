#include "search_algos.h"
#include <math.h>

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
	ret_bin = binary_search(new_arry, new_size, value);
	if (ret_bin != nill)
		return (ret_bin + start);
	return (-1);
}
