#include <stdio.h>
/**
 *main - print all single digit numbers of base 10
 *starting from 0
 *
 *Return: always 0
 */
int main(void)
{
int n;
char l;
for (n = 0 ; n <= 9 ; n++)
{
putchar((n % 10) + '0');
}
for (l = 'a'; l <= 'f' ; l++)
{
putchar(l);
}
putchar('\n');
return (0);
}
