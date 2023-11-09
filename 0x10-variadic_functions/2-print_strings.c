#include "variadic_functions.h"

/**
 * print_strings - function that prints strings followed by a new line.
 * @separator: the string to be printed between strings.
 * @n: number of strings passed to the function.
 * @...: strings to be printed.
 *
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str != NULL)
		{
			printf("%s", str);
			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
		else
			printf("(nill)");
	}
	printf("\n");
}
