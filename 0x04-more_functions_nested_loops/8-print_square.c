#include "main.h"

/**
 *print_square - print squares with a given size
 *
 *@size: the size of squares and number of lines
 *
 *Return: void
 */

void print_square(int size)
{
int lines = 0;
int squares;
int rep = 0;
while (rep < size)
{
for (squares = 0; squares < size; squares++)
{
_putchar('#');
}
while (lines < size)
{
_putchar('\n');
lines++;
break;
}
rep++;
}
if (size <= 0)
{
_putchar('\n');
}
}
