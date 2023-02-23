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
_putchar(45);
k++;
}
_putchar('\n');
}
