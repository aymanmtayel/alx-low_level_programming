#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars,
 *and initializes it with a specific char.
 *@size: size of the array
 *@c: the character will be used in the array
 *Return: return null if failed to create the array or the array.
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;
arr = malloc(size * sizeof(char));

if (size == 0 || arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = c;

arr[i] = '\0';
return (arr);
}
