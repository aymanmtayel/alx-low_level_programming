#include "main.h"

/**
 * wild_check - check for wild stars and pass them.
 * @s2: string 2 that can hold wildstars.
 * Return: string 2 without the wildstars.
 */

char *wild_check(char *s2)
{
	if (*s2 == '*')
		return (wild_check(s2 + 1));
	else
		return (s2);
}

/**
 * first_check - checks if s1 is null or s1 = s2 already
 * @s1: first string
 * @s2: second string
 * Return: 0 if error
 */

int first_check(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);
	ret += first_check(s1 + 1, s2);
	return (ret);
}

/**
 * wildcmp - function that compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if identical and 0 if not
 */


int wildcmp(char *s1, char *s2)
{
	int ret = 0;

	if (!*s1 && *s2 == '*' && !*wild_check(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = wild_check(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret += wildcmp(s1 + 1, s2 + 1);
		ret += first_check(s1, s2);
		return (!!ret);
	}
	return (0);
}
