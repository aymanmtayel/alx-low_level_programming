#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - get the last digit of a randomly generated number
 *        and check whether it is greater than 5, less than 6, or equals 0
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int mod;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod = n % 10;
	if ((mod) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			n, mod);
	}
	else if ((mod) < 6 && (mod) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
			n, mod);
	}

	return (0);

}
