#include "search_algos.h"

/**
 * advanced_binary_recursive - the recursive function to search for a value
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 * or -1 if value is not present in array or if array is NULL
*/

int *advanced_binary_recursive(int *array, size_t size, int value)
{
	size_t i = 0;

	if (size == 0 || array == NULL)
		return (NULL);
	printf("Searching in array: ");
	for (i = 0; i < size - 1; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	i = (size - 1) / 2;
	if (array[i] == value)
	{
		if (i)
			return (advanced_binary_recursive(array, i + 1, value));
		return (array + i);
	}

	if (array[i] > value)
		return (advanced_binary_recursive(array, i + 1, value));

	return (advanced_binary_recursive(array + i + 1, size - i - 1, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers.
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 * or -1 if value is not present in array or if array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	int *recur = advanced_binary_recursive(array, size, value);

	if (recur == NULL)
		return (-1);
	return (recur - array);
}
