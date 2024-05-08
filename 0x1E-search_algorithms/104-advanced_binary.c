#include "search_algos.h"
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
	int low = 0, high = size - 1, mid;

	if (array == NULL || size == 0 || !value)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (mid = low; mid < high; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);
		mid = (low + high) / 2;
		if (array[mid] == value && (mid == 0 || array[mid - 1] != value))
			return (mid);
		if (array[mid] >= value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
