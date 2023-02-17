#include <stdio.h>

/**
 * main - print double digit combos usin ASCII codes
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a;
int b;
int c;

a = 48;
b = 48;
c = 48;

while (a < 58)
{
b = a + 1;
while (b < 58)
{
c = b + 1;
while (c < 58)
{
putchar(a);
putchar(b);
putchar(c);
 if (a < 56 || b < 56 || c < 57)
{
putchar(44);
putchar(32);
}
c++;
}
b++;
}
a++;
}
putchar(10);
return (0);
}
