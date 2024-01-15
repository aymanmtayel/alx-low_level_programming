#include <stdio.h>
#include <stdlib.h>

/**
 * add - add two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: their addition
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtract two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: their subtraction
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiply two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: their multiplication
 */
int mul(int a, int b)
{
	if (b == 0)
	{
		printf("Division by Zero is undefined\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - modlus of two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: their mod
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Division by Zero is undefined\n");
		return (0);
	}
	return (a % b);
}
