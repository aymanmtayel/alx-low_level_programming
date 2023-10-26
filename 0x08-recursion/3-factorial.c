#include "main.h"

/**
 *factorial - function to get the factorial of a number
 *@n: number
 *Return: factorial
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);

	if (n > 1)
	{
		return (n * (factorial(n - 1)));
	}
	return (1);
}
