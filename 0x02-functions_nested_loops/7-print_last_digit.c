#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int print_last_digit(int z)
{
int l;
l = z % 10;
if (l < 0)
{
l = l * -1;
}
_putchar(l + '0');
return (l);
}
