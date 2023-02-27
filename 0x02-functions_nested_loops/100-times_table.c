#include "main.h"
/**
 * times_table - print the times table of 9
 *
 * Return: void
 */
void print_times_table(int n)
{
  
	int x, y, z, u, d;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			z = x * y;

			if (z > n)
			{
				u = z % 10;
				d = (z - u) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(z + '0');
			}
		}

		_putchar('\n');
	}
}
