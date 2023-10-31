#include "main.h"

/**
 * _strdup - function that returns a pointer to duplicated string
 * @str: string to be duplicated in  new memory blocks
 * Return: pointer to the duplicated string, NULL if failed
 */

char *_strdup(char *str)
{
	unsigned long int i;
	char *temp;

	if (str == NULL)
		return (NULL);

	temp = malloc(sizeof(str) + 1);
	if (temp == 0)
		return (NULL);

	for (i = 0; i < sizeof(str); i++)
	{
		temp[i] = str[i];
	}
	return (temp);
}
