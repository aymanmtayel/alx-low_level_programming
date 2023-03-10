#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */

int _atoi(char *s)
{
int i = 0, a = 0, n = 0, len = 0, b = 0, digit = 0;

while (s[len] != '\0')
len++;

while (i < len && b == 0)
{
if (s[i] == '-')
++a;

if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (a % 2)
digit = -digit;
n = n * 10 + digit;
b = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
b = 0;
}
i++;
}

if (b == 0)
return (0);

return (n);
}
