#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: sun of 2 integers.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: subtraction of the two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply of 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: multiplication of 2 integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: division of 2 integers , or 100 if division by zero.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - get modolus of two integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: modulo of the two integers, or 100 if division by zero.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

