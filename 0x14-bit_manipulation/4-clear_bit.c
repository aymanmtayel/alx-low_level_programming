#include "main.h"

/**
 *clear_bit - changes the bit at an index to 0
 *@n: the integer
 *@index: postion of the bit to be changed
 *Return: -1 if failed and 1 if done
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int one = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(one << index);
	return (1);
}
