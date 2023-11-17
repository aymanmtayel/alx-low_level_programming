#include <stdio.h>

void __attribute__ ((constructor)) print_b_main(void);

/**
 * print_b_main - prints a message before the main is executed
 * Return: void
 */

void print_b_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
