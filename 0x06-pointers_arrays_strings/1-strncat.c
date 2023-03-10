#include "main.h"

/**
 *_strncat - concatenates two strings at most n
 *bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be used for
 * concatenated string
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
for (j = 0; src[j] != '\0' && j < n; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
