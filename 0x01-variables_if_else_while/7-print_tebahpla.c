#include <stdio.h>
/**
 *main - produce the alphabet in lower case then captalized
 *
 *Return: Always  0
 */
int main(void)
{
int l;

for (l = 'z' ; l >= 'a' ; l--)
putchar(l);
putchar('\n');

return (0);
}
