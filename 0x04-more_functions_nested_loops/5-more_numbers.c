#include "main.h"

/**
 *more_numbers - print all numbers from 0 to 14 , 10 times
 *Return: void
 *
 */

void more_numbers(void)
{
int k = 0;
int i;
while (k < 11)
{
for (i = 48; i <= 62; i++)
{
if (i >= 58)
{
_putchar(49);
_putchar(i - 10);
}
else
{
_putchar(i);
}
}
_putchar('\n');
k++;
}
}
