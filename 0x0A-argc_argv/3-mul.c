#include <stdio.h>
#include <stdlib.h>

/**
 * main - print multiplies two numbers.
 *@argc: arguments count must be 3.
 *@argv: value of the two numbers.
 *Return: 1 if error 0 if success.
 */

int main(int argc, char *argv[])
{

if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
}

