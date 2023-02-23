#include "main.h"

/**
 *print_diagonal - print diagonals with spaces
 *@n: is number of diagonals
 *Return: void
 *
 */

void print_diagonal(int n)
{
int i = 0;
int k;

if (n > 0)
{
while (i < n)
{
for (k = 0; k < i; k++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
i++;
}
}
else
{
_putchar('\n');
}
}
