#include "function_pointers.h"

/**
 *array_iterator - executes a function give
 *n as a parameter on each element of an array.
 *@array: array to be iterated
 *@size: size of the array
 *@action: point to the array
 *Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
if ((array != 0) && (size != 0) && (action != NULL))
{
size_t i;
for (i = 0; i < size; i++)
action(array[i]);
}
}
