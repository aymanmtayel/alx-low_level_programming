#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid.
 * @grid: pointer to pointer of grid to be freed.
 * @height: height (no of rows) of the grid.
 * Return: Void.
 */

void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
		free(grid[r]);
	free(grid);
}
