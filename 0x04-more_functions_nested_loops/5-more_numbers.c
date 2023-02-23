#include "main.h"

/**
 *more_numbers - print all numbers from 0 to 14 , 10 times
 *Return: void
 *
 */

void more_numbers(void)
{
int a, b, c, d;

b = '0';
c = 0;
d = '9';

for (a = 0; a < 10; a++)
{
while (c < 2)
{
while (b <= d)
{
if (d == '4')
_putchar('1');
_putchar(b);
b++;
}
c++;
d = '4';
b = '0';
}
_putchar('\n');
c = 0;
b = '0';
d = '9';
}
}
