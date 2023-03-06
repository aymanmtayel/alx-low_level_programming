#include "main.h"

/**
 *print_chessboard - function that prints the chessboard
 *@a:size of the chess board
 *Return: void
 */

void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
if (j > 6)
{
_putchar(a[i][j]);
_putchar('\n');
}
else
_putchar(a[i][j]);
}
}
}
