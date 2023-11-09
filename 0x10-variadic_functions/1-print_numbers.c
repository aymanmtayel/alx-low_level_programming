#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: the string to be printed between numbers
 * @n: number of parameters passed
 * @...: the integers to be printed.
 *
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
