#include "main.h"
#include <stdlib.h>
/**
 * main - function to multiply two arguments
 * @argc: arguments count
 * @argv: arguments value
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	else
		for (i = 1; i < argc; i++)
		{
			mul *=  atoi(argv[i]);
		}
	printf("%d\n", mul);
	return (0);
}
