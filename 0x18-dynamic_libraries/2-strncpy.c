#include "main.h"

/**
 *_strncpy - function that copies a string into
 *a string based on the n inputted
 *@dest: main string
 *@src: string to be copied into our main string
 *@n: charcters to be copied staring from 0
 *Return: the whole string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i, j;
i = 0;
for (j = 0; src[j] != '\0' && j < n; j++)
{
dest[i] = src[j];
i++;
}
for (; i < n; i++)
dest[i] = '\0';

return (dest);
}
