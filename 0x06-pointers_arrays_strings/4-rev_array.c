#include "main.h"

/**
 *reverse_array - reverse a given array
 *@a: array of integers
 *@n: size of array to be reversed
 *Return: void
 */

void reverse_array(int *a, int n)
{
int temp;
int end = n - 1;
int start = 0;
while (start < end)
{
temp = a[start];
a[start] = a[end];
a[end] = temp;
start++;
end--;
}
}
