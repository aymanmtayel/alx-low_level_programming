#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function.
 * @...: paramter to be printed
 *
 * Return: Void.
 */

void print_all(const char * const format, ...)
{
	int size = 0, i = 0;
	char *separator = ", ";
	char *str;

	va_list list;

	va_start(list, format);

	while (format && format[size])
		size++;

	while (format && format[i])
	{
		if (i == (size - 1))
			separator = "";
		switch (format[i])
		{
			case 'c':
			printf("%c%s", va_arg(list, int), separator);
			break;
			case 'i':
			printf("%d%s", va_arg(list, int), separator);
			break;
			case 'f':
			printf("%f%s", va_arg(list, double), separator);
			break;
			case 's':
			str = va_arg(list, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, separator);
			break;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
