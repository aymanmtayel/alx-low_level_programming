#include "main.h"

/**
 *_print_rev_recursion - prints strings in revers
 *@s: string to be printed
 *Retrurn : void
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*(s + 0));
	}
}
