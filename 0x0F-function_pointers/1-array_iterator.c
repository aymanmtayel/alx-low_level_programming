#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array.
 * @array: array of elements.
 * @size: size of the array
 * @action: pointer to the function to be used.
 *
 * Return: Void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *size_array = array + size - 1;

	if (array && size && action)
	{
		while (array <= size_array -1)
			action(*array++);
	}
}
