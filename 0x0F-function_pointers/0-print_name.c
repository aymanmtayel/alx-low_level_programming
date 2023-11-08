#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: the name to be printed
 * @f: pointer to the function the prints the name
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
