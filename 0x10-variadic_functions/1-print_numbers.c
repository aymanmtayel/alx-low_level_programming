#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_numbers - print numbers followed by a new line
 *@separator: string to be printed between numbers
 *@n: number of integers passed
 *@...: integers passed
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i = 0;
if (n != 0)
{
va_start(ap, n);
if (i == 0)
{
printf("%i", va_arg(ap, int));
i++;
}
for (; i < n; i++)
{
if (separator != NULL)
printf("%s%i", separator, va_arg(ap, int));
else
printf("%i", va_arg(ap, int));
}
printf("\n");
va_end(ap);
}
}