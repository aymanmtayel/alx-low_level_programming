#include "main.h"

/**
 *_strspn - Returns the number of bytes in the initial segment
 *of s which consist only of bytes from accept
 *@s:string
 *@accept: letters to be checked against
 *Return: number of bytes (size)
 */


unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j;
unsigned int size = 0;
unsigned int p = 0;
while (s[i] != '\0')
{
j = 0;
p = size;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
size++;
}
j++;
}
if (p == size)
{
break;
}
i++;
}
return (size);
}
