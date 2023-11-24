#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at an index
 * @n: pointer to the integer
 * @index: index of the bit to be changed to 1 starting from 0
 * Return: 1 if the change has happened, -1 if error occured.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= 1 << index;
	return (1);
}
