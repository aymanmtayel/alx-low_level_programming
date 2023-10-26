#include "main.h"
#include <string.h>
/**
 *check - function to check is same length and characters
 *@str: string to be checked
 *@l: length of the string
 *@n: the counter for the checks
 *Return: 1 if correct and 0 if no
 */

int check(char *str, int l, int n)
{
	if (n >= l)
		return (1);
	if (str[l] == str[n])
		return (check(str, l - 1, n + 1));
	return (0);
}

/**
 * is_palindrome - function to check for palindrome
 * @s: string to be checked
 * Return: 1 is yes and 0 if no
 */


int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);
	int n = 0;

	return (check(s, l - 1, n));
}
