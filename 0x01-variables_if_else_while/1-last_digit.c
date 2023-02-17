#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - get a random number and states
 *wether the last digit of a number is higher
 *or lower than 6 or equals 0.
 *
 *Return: Always 0.
 */
int main()
{
	int n;
	int mod;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	mod = n % 10;
	if (mod > 5) printf("Last digit of %i is %i and is greater than 5\n", n, mod);
	if ((mod < 6) && (mod != 0)) printf("Last digit of %i is %i and is less than 6 and not 0\n", n, mod);
	if (mod ==0) printf("Last digit of %i is %i and is 0\n", n, mod);
	return (0);
}
