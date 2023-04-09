#include "main.h"

/**
 *flip_bits - function that returns the number of bits
 *you would need to flip to get from one number to another
 *@n: first integer
 *@m: seconde integer
 *Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int compare = n ^ m;

	while (compare != 0)
	{
		count += compare & 1;
		compare >>= 1;
	}
	return (count);
}
