#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to a 0 at index.
 * @n: pointer to an integer.
 * @index: index of the bit to be changed.
 * Return: 1 if worked, -1 if error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
