#include "main.h"
#include <stdio.h>

/**
 * _abs - check for sign
 *@n: number to be checked
 * Return: absolute value
 */
int _abs(int n)
{
if (n < 0)
{
return (n * -1);
}
return (n);
}
