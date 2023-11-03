#include "main.h"

/**
 * main - program that multiplies two positive numbers
 * @argc: count of arguments given
 * @argv: values of arguments (integers)
 * Return: 0 on success or 98 if Error.
 */

int main(int argc, char *argv[])
{
	long int result;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%ld\n", result);
	return (0);
}

