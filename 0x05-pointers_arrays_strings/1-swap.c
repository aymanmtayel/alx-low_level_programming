#include "main.h"

/**
 * swap_int - swaps two variable values.
 * @a: 1st variable.
 * @b: 2nd variable.
 * Return: void.
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
