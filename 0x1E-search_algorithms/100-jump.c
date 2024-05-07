#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located or -1 if value not present
 * or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, jump;

	if (array == NULL || size == 0 || !value)
		return (-1);

	jump = sqrt(size);
	for (i = 0; i < size && array[i] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i += jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);

	j = i - jump;
	while (j <= i && j < size)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j++;
	}

	return (-1);
}

