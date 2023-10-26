#include "main.h"

/**
 *if_prime - checks for the prime number
 *@x: main number
 *@y: check if it is its divisor
 *Return: the prime number or 0
 */

int if_prime(int x, int y)
{
	if (x == y)
		return (1);
	if (!(x % y))
		return (0);
	return (if_prime(x, y + 1));
}

/**
 *is_prime_number - function to check for prime numbers
 *@n: the number to be checked
 *Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (if_prime(n, 2));
}

