#include "main.h"

/**
 * _strdup - function that returns a pointer to duplicated string
 * @str: string to be duplicated in  new memory blocks
 * Return: pointer to the duplicated string, NULL if failed
 */

char *_strdup(char *str)
{
	int i;
	int size;
	char *temp;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	temp = malloc(size * sizeof(*str) + 1);
	if (temp == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		temp[i] = str[i];
	}
	return (temp);
}
