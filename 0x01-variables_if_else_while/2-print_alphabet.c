#include <stdio.h>
/**
 *main - produce the alphabet in lower case
 *
 *Return: Always  0
 */
int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
putchar(ch);

putchar('\n');

return (0);
}
