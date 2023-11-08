#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: arguments count
 * @argv: arguments values
 *
 * Return: 0 on success.
 *
 */

int main(int argc, char *argv[])
{
	char *ptr = (char *)main;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (; i > 0; i--)
		printf("%02hhx%s", *ptr++, i ? " " : "\n");
	return (0);
}

