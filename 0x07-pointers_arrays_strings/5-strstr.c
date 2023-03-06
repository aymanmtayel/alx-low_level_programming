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
int j;

for (i = 0; haystack[i]; i++)
{
for (j = 0; needle[j]; j++)
{
while (haystack[i] == needle[j])
{
if (haystack[i + 1] == needle[j + 1])
return (haystack + i);
i++;
j++;
}
}
}
return (NULL);
}
