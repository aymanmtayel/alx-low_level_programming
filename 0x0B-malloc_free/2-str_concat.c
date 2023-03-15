#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 *@s1: string 1
 *@s2: string 2
 *Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
char *s;
int i, j, k, l;

if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;
j++;
s = malloc(i * (sizeof(*s1)) + j * (sizeof(*s2)));
if (s == 0)
return (NULL);
for (k = 0, l = 0; k < i + j; k++)
{
if (k < i)
s[k] = s1[k];
else
s[k] = s2[l++];
}
return (s);
}
