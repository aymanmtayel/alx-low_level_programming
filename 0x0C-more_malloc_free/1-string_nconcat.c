#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string.
 * @s2: second string
 * @n: bytes to be used from second string
 * Return: Null if fails, the concatenated string if succeded.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, size1, size2, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 != NULL)
	{
		s2 = "";
	}

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;

	concat = malloc(size1 + n + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		i++;
		concat[i] = s2[j];
	}

	concat[i] = '\0';
	return (concat);
}


