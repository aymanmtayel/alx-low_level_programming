#include "main.h"

/**
 * size - function to return the size of the arguments
 * @argsv: arguments to be sized
 * Return: the size of the arguments
 */

int size(char *argsv)
{
	int size;

	for (size = 0; argsv[size] != '\0'; size++)
		;
	return (size);
}

/**
 * argstostr - function that concatenates all arguments to a string.
 * @ac : argument count.
 * @av: array of arguments values.
 * Return: pointer to the concatenated string or NULL if fails.
 */

char *argstostr(int ac, char **av)
{
	char *temp;
	int i, j, counter = 0, size_of_valus;

	if (ac == 0  || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, size_of_valus++)
		size_of_valus += size(av[i]);

	temp = malloc(sizeof(char) * size_of_valus + 1);

	if (temp == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0 ; av[i][j] != '\0'; j++, counter++)
			temp[counter] = av[i][j];
		temp[counter] = '\n';
		counter++;
	}
	temp[counter] = '\0';
	return (temp);
}
