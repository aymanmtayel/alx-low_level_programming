#include "main.h"

/**
 *rot13 - function that encodes a string using rot13.
 *@s: string to be encoded
 *Return: encoded string
 */

char *rot13(char *s)
{
int i = 0;
while (s[i] != '\0')
{
while ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90))
{
if ((s[i] >= 110 && s[i] <= 122) || (s[i] >= 78 && s[i] <= 90))
{
s[i] = s[i] - 13;
break;
}
s[i] = s[i] + 13;
break;
}
i++;
}
return (s);
}
