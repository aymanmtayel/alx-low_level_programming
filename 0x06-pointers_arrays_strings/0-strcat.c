#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: first string
 * @src: the string to append
 * Return: the full string
 */

char *_strcat(char *dest, char *src)
{
int l, i;

l = 0;
while (dest[l] != '\0')
{
l++;
}
for (i = 0; src[i] != '\0'; i++)
{
dest[l] = src[i];
l++;
}
dest[l] = '\0';
return (dest);
}
