#include <stdio.h>
/**
 *main - produce the alphabet in lower case then captalized
 *
 *Return: Always  0
 */
int main(void)
{
char l;
char ch;

for (l = 'a' ; l <= 'z' ; l++)
putchar(l);
for (ch = 'A' ; ch <= 'Z' ; ch++)
putchar(ch);
putchar('\n');

return (0);
}


