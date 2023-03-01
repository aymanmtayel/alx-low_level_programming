#include "main.h"

/**
 *_strcmp - function that compare two strings
 *@s1: first string
 *@s2: second string
 *Return: difference
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int compare;

while (s1[i] == s2[i] && s1[i] != '\0')
{
i++;
}
compare = s1[i] - s2[i];
return (compare);
}
