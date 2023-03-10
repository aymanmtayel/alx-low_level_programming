#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i, sum, is_num;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			is_num = check_num(argv[i]);
			if (is_num == 1)
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
