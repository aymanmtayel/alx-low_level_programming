#include "main.h"
#define NULL 0

/**
 *_strstr - finds the first occurrence of the substring needle
 *in the string haystack
 *@haystack: string to be compared
 *@needle: string to be compared against
 *Return: pointer to the beginning of the located substring,
 *or NULL if the substring is not found.
 */


char *_strstr(char *haystack, char *needle)
{
int i, j, s, l;

while (needle[l])
{
l++;
}

for (i = 0; haystack[l]; i++)
{
for (j = 0; j < l && haystack[i] == needle[j]; j++, i++)
{
if (j == 0)
{
s = i;
}
if (j == l - 1)
{
return (haystack + s);
}
}
}
return (NULL);
}
