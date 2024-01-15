#include "main.h"
/**
 *_strchr - Returns a pointer to the first occurrence of the character
 *c in the string s, or NULL if the character is not found
 *@s: string
 *@c: character to look for
 *Return: pointer to the first occurrence of the character or Null if not found
 */


char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
if (c == '\0')
{
return (s + i);
}
return (NULL);
}
