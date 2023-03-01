#include "main.h"

char *_strcat(char *dest, char *src)
{
int l,i;

l=0;
while (dest[l] != '\0')
{
l++;
}
for (i = 0; src[i] != '\0';i++)
{
dest[l] = src[i];
l++;
}
dest[l] = '\0';
return (dest);
}
