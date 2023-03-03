#include "main.h"
/**infinite_add - function sums two numbers with definite size
 *@n1: first number
 *@n2: seconde number
 *@r: container name
 *@size_r: size of the container
 *Return: r (the numbers after addition)
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0;
int j;
int c = 0;

char *ptr1 = n1;
char *ptr2 = n2;

while (*ptr1 != 0)
ptr1++;

while (*ptr2 != 0)
ptr2++;

size_r--;
r[size_r] = 0;
ptr1--;
ptr2--;
while (ptr1 != n1 - 1 && ptr2 != n2 - 1)
{
r[i] = *ptr1 + c + *ptr2 + - '0';
c = 0;
if (r[i] > '9')
{
c++;
r[i] -= 10;
}
i++;
ptr1--;
ptr2--;
if (size_r == i && (ptr1 != n1 - 1 || ptr2 != n2 - 1 || c == 1))
return (0);
}
while (ptr1 != n1 - 1)
{
r[i] = *ptr1 + c;
c = 0;
if (r[i] > '9')
{
c = 1;
r[i] -= 10;
}
ptr1--;
i++;
if (size_r == i && (ptr1 != n1 - 1 ||  c == 1))
return (0);
}
while (ptr2 != n2 - 1)
{
r[i] = *ptr2 + c;
c = 0;
if (r[i] > '9')
{
c = 1;
r[i] -= 10;
}
ptr2--;
i++;
if (size_r == i && (ptr2 != n2 - 1 || c == 1))
return (0);
}
if (c == 1)
{
r[i] = '1';
r[i + 1] = 0;
}
else
{
r[i--] = 0;
}
j = 0;
while (j <= i)
{
c = r[i];
r[i] = r[j];
r[j] = c;
i--;
j++;
}
return (r);
}
