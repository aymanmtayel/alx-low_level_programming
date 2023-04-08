#include "main.h"

/**
 *binary_to_uint - converts binary to unsigned int
 *@b: pointing to a string of 0 and 1 chars
 *Return: the converted number
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		i <<= 1;
		if (*b == '1')
			i += 1;

		b++;
	}
	return (i);
}
