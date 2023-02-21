#include "main.h"

/**
 * print_last_digit - print the last difit
 *@z: is the digit to be tested
 * Return: the last digit.
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
