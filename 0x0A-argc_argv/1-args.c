#include <stdio.h>

/**
 *main - prints the number of arguments passed into it.
 *@argc: arguments count.
 *@argv: arguments vector array.
 *Return: zero.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
