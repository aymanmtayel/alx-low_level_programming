#include <stdio.h>

/**
 * main - function tha print all arguments it receives
 * @argc: arguments count
 * @argv: arguments values
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
