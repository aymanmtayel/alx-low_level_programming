#include "main.h"

/**
 * alloc_grid - function to return a pointer to 2 dimenstional array
 * @width: 1d
 * @height: 2d
 * Return: pointer to the array or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **temp, c, r;

	if (height <= 0 || width <= 0)
		return (NULL);

	temp = malloc(sizeof(int) * height);
	if (temp == 0)
		return (NULL);

	else
	{
		for (r = 0; r < height; r++)
		{
			temp[r] = malloc(sizeof(int) * width);
			if (temp[r] == 0)
			{
				while (r--)
					free(temp[r]);
				free(temp);
				return (NULL);
			}
			for (c = 0; c < width; c++)
				temp[r][c] = 0;
		}
	}
	return (temp);
}
