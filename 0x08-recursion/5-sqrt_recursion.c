#include "main.h"

/**
 *_sqrt - get the sqrt of a number
 *@x: the number
 *@y: our guess
 *Return: the sqrt or -1 if error
 */

int _sqrt(int x, int y)
{
	if (y * y > x)
		return (-1);

	if (y * y == x)
		return (y);

	return (_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - function to get the natural sqrt of a number
 * @n: the number
 * Return: the sqrt or -1 if error
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
