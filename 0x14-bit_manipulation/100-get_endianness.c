#include "main.h"

/**
 * get_endianness - checks the system if it is little endian or big endian
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	return (*c == 1);
}
