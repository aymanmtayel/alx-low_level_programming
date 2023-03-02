#include "main.h"

/**
 *print_number - function that prints an integer.
 *@n: integer to be printed
 *Return: void
 */

void print_number(int n)
{
int temp;
if (n < 0)
{
_putchar('-');
n = n * -1;
}
temp = n;

if (temp / 10)
print_number(temp / 10);

_putchar(temp % 10 + '0');
}
