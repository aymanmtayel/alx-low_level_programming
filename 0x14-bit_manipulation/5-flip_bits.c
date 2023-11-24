#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t i = 0;
	unsigned long int diff = n ^ m;

	while (diff != 0)
	{
		i += diff & 1;
		diff >>= 1;
	}
	return (i);
}
