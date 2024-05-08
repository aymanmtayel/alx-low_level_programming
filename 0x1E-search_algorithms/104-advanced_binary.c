#include "search_algos.h"

/**
 * advanced_binary_recursive - the recursive function to search for a value
 * @array: pointer to the first element of the array to search in
 * @low: number of elements in array
 * @high: the value to search for
 * @value: the value to search for
 * Return: the index where value is located
 * or -1 if value is not present in array or if array is NULL
*/

int advanced_binary_recursive(int *array, int low, int high, int value)
{
	int mid, i;

	if (low > high || array == NULL)
		return (-1);
	mid = low + (high - low) / 2;
	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[high]);
	if (array[mid] == value && (mid == 0 || array[mid - 1] != value))
		return (mid);

	if (array[mid] >= value)
		return (advanced_binary_recursive(array, low, mid - 1, value));

	return (advanced_binary_recursive(array, mid + 1, high, value));
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
	int low = 0, high = size - 1;

	if (array == NULL || size == 0 || !value)
		return (-1);
	printf("Searching in array: ");
	return (advanced_binary_recursive(array, low, high, value));
}
