#include "main.h"

/**
 * main - program that prints the min. number of coins needed to change money.
 * @argc: count of arguments.
 * @argv: value of arguments.
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int num, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
	}
	else
	{
		num = atoi(argv[1]);
		while (num > 0)
		{
			if (num >= 25)
			{
				num -= 25;
				coins += 1;
			}
			else if (num >= 10)
			{
				num -= 10;
				coins += 1;
			}
			else if (num >= 5)
			{
				num -= 5;
				coins += 1;
			}
			else if (num >= 2)
			{
				num -= 2;
				coins += 1;
			}
			else if (num >= 1)
			{
				num -= 1;
				coins += 1;
			}
		}
		printf("%d\n", coins);
	}
	return (0);
}


