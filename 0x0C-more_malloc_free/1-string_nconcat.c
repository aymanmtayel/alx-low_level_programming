#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - function that concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: length of second string
 *Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *full;
unsigned int c_s1, c_s2, c_full;

if (s1)
for (c_s1 = 0; s1[c_s1]; c_s1++)
;
if (s2)
for (c_s2 = 0; s2[c_s2]; c_s2++)
;
if (!(n >= c_s2))
c_s2 = n;

full = malloc(sizeof(char) * (c_s1 + c_s2) +1);
if (!full)
return (NULL);

for (c_full = 0; c_full < (c_s1 + c_s2); c_full++)
{
if (c_full < c_s1)
full[c_full] = s1[c_full];
else
full[c_full] = s2[c_full - c_s1];
}

full[c_full] = '\0';

return (full);
}
