#include "main.h"

/**
 *print_triangle - prints inverted hash like a triangle
 *@size: number of hashes and lines
 *
 *Return: Void
 *
 */

void print_triangle(int size)
{
int a = 0;
int b;
int c;

if (size > 0)
{
while (a < size)
{
for (b = size - 1; b > a; b--)
{
_putchar(' ');
}
for (c = 0; c < a + 1; c++)
{
_putchar('#');
}
_putchar('\n');
a++;
}
}
else
{
_putchar('\n');
}
}
