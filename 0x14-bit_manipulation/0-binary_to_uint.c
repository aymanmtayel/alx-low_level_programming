#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: pointer to a string
 *
 *Return: binary represnetation of the characters inputed or 0 upon fail
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int place = 1;

	if (b == NULL)
		return (0);

	for (; *b; b++)
	{
	if ((*b !='0') & (*b != '1'))
		return (0);

	n += (*b - '0') * place;
	place *= 2;
	}
	return (n);
}
