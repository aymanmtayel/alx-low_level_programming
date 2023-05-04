#include "main.h"

/**
 *set_bit - changes a desired bit into 1
 *@n: integer
 *@index: index of the bit to be changed
 *Return: -1 if failed and 1 if done
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int one = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= one << index;
	return (1);
}
