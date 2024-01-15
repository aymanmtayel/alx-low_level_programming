#include "main.h"

/**
 *_strpbrk - locates the first occurrence in the string s of
 *any of the bytes in the string accept
 *@s: string
 *@accept: accepted charcters
 *Return: pointer to the byte in s that matches one of the
 *bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j;
while (s[i])
{
j = 0;
while (accept[j])
{
if (s[i] == accept[j])
{
return (s + i);
}
j++;
}
i++;
}
return (NULL);
}
