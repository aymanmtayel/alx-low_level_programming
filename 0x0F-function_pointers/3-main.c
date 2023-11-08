#include "3-calc.h"

/**
 * main - function that executes the operation provided on two integers
 * @argc: arguments count
 * @argv: arguments values
 *
 * Return: 0 on success , 98 if argc is wrong, 99 if wrong operator, 100 if
 * division by zero.
 *
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operation(a, b));
	return (0);
}
