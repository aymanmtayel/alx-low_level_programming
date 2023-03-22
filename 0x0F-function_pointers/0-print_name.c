#include "function_pointers.h"

/**
 *print_name - print a name
 *@name: the name to be printed
 *@f:pointer to the function
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
