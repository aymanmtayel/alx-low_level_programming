#include "main.h"

/**
 * *str_concat - function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: the pointer to the two strings concatenated or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int size_1, size_2, place;
	char *temp;

	if (s1 != NULL)
		for (size_1 = 0; s1[size_1] != '\0'; size_1++)
			;

	if (s2 != NULL)
		for (size_2 = 0; s2[size_2] != '\0'; size_2++)
			;

	temp = malloc((size_1 + size_2) * sizeof(char) + 1);

	if (temp == 0)
		return (0);

	for (place = 0; place <= size_1 + size_2; place++)
	{
		if (place < size_1)
			temp[place] = s1[place];
		else
			temp[place] = s2[place - size_1];
	}

	temp[size_1 + size_2] = '\0';
	return (temp);
}

