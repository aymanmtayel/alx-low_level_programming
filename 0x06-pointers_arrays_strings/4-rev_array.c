#include "main.h"

/**
 *reverse_array - return the reverse of an array
 *of integers
 *@a: array of integers
 *@n: the number of elements to reverse
 *Return: void
 */

void reverse_array(int *a, int n)
{
int i, j;
j = 0;
n = n - 1;

while (i <= n)
{
j = a[i];
a[i++] = a[n];
a[n--] = j;
}
}
