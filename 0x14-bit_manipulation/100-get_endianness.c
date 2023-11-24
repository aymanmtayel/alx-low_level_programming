#include "main.h"

/**
 * get_endianness - function that checks for the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int one = 1;
	char *c = (char *)&one;

	return (*c == 1);
}
