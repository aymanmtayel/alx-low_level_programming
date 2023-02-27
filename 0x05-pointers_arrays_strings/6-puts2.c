#include "main.h"

/**
 *puts2 - prints every other character of a string
 *starting with the first character
 *followed by a new line.
 *@str: characters to be printed
 *Return: void
 */

void puts2(char *str)
{
int i = 0;
int stop = 0;
while (str[i++])
stop++;
for (i = 0; i < stop; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
