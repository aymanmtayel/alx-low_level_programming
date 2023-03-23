#include "variadic_functions.h"

/**
 *print_strings - prints strings, followed by a new line.
 *@separator: the string to be printed between the strings
 *@n: the number of strings passed to the function
 *@...: strings passed to the function
 *Return : Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list ap;

va_start(ap, n);

for (i = 0; i < n; i++)
{
str = va_arg(ap, char *);

if (str != NULL)
{
printf("%s", str);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
else
printf("(nil)");
}
printf("\n");
}
