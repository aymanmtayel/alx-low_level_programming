#include "main.h"

/**
 * print_rev - gets a string and then revers it.
 * @s: string.
 *
 * Return: void
 */

void print_rev(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
;
for (i = i - 1; s[i] != '\0'; i--)
{
_putchar(s[i]);
}
}
