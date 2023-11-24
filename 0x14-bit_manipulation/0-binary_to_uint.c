#include "main.h"

/**
 * binary_to_uint - functuin that converts a binary number
 * to an unsigned int
 * @b: pointer to a string of zeros and ones
 * Return: the converted number, or 0 if any not 0 or 1 or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	size_t num = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if ((*b != '0') && (*b != '1'))
			return (0);
		num <<= 1;
		if (*b == '1')
			num += 1;
		b++;
	}
	return (num);
}
