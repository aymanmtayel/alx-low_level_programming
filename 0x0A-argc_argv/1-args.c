#include <stdio.h>

/**
 *main - function to print the number of arguments passed to it
 *@argc: arguments count
 *@argv: arguments stored
 *Return: 0 on success
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n",argc - 1);
	return (0);
}
