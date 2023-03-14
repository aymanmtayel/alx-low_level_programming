#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 *@str: string to be used
 *Return: the copy or null if no size
 */

char *_strdup(char *str)
{
unsigned int i;
unsigned int size;
char *copy;

if (str != NULL)
size = strlen(str);

copy = malloc(size * (sizeof(char)) + 1);

if (str == NULL || copy == NULL)
return (NULL);

for (i = 0; i <= size; i++)
copy[i] = str[i];

copy[i] = '\0';
return (copy);
}
