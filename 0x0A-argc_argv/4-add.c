#include "main.h"

/**
 * is_digitchar - program to check for numbers
 * @s: character to be check if number
 * Return: 0 if not number, 1 if number
 */

int is_digitchar(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			i++;
		}
		else
		{
			return (0);
			}
	}
	return (1);
}

/**
 * main - program to add two positive numbers.
 * @argc: arguments count
 * @argv: arguments value
 * Return: 0 if success
 */


int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");

	else if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			if (is_digitchar(argv[i]) == 1)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
