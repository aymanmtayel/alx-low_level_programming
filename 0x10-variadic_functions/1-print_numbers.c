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
	for (i = 0; i < n - 1; i++)
	{
		if (separator != NULL)
			printf("%d%s", va_arg(list, int), separator);
		if (separator == NULL)
			printf("%d", va_arg(list, int));
	}
	printf("%d\n", va_arg(list, int));

	va_end(list);
}
