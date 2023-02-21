#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int m1, m2, s1, s2;

for (m1 = 0; m1 <= 2; m1++)
{
for (m2 = 0; m2 <= 9; m2++)
{
if ((s1 <= 1 && s2 <= 9) || (m1 <= 2 && m2 <= 3))
{
for (s1 = 0; s1 <= 5; s1++)
{
for (s2 = 0; s2 <= 9; s2++)
{
_putchar(m1 + '0');
_putchar(m2 + '0');
_putchar(58);
_putchar(s1 + '0');
_putchar(s2 + '0');
_putchar('\n');
}
}
}
}
}
}

