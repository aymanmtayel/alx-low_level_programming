#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to search in.
 * @size: size of the array.
 * @cmp: pointer to the function to be used to compare values.
 *
 * Return: -1 if no match or no elements in the array , otherwise 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size < 1 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
