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
int i;
int s = 0;

while (needle[s])
s++;

while (*haystack)
{
for (i = 0; needle[i]; i++)
{
if (haystack[i] != needle[i])
break;
}
if (i != s)
haystack++;
else
return (haystack);
}
return (NULL);
}
