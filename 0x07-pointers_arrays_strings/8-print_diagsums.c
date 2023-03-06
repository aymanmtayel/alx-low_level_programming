#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of the two diagonals of a square matrix
 *@a: the array
 *@size: the size of the array
 *Return: void
 */

void print_diagsums(int *a, int size)
{
int i = 0;
int j = size - 1;
int sum_1 = 0;
int sum_2 = 0;

while (i <= (size * size))
{
sum_1 = sum_1 + a[i];
i = i + size + 1;
}

while (j < (size * size - 1))
{
sum_2 += a[j];
j = j + size - 1;
}
printf("%d, %d\n", sum_1, sum_2);
}
