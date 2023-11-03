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
	unsigned int i, j, full;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n <= j)
		j = n;

	concat = malloc(sizeof(char) * (i + j + 1));
	if (concat == NULL)
		return (NULL);

	for (full = 0; full < (i + j); full++)
	{
		if (full < i)
			concat[full] = s1[full];
		else
			concat[full] = s2[full - i];
	}

	concat[full] = '\0';
	return (concat);
}


