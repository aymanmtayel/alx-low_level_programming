#include "main.h"

/**
 *print_line - print lines as many as inputed
 *@n: number of dashes needed
 *Return: void
 *
 */

void print_line(int n)
{
int k = 0;

while (k < n)
{
_putchar('_');
k++;
}
_putchar('\n');
}
