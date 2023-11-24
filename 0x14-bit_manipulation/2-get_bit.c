#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: integer to be presented
 * @index: index of the bit you want to get
 * Return: the value of the bit at the index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
