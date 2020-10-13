#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees 2-dimensional array
 * @grid: grid
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int x, y;

	for (x = 0; x < height; x++)
	{
		for (y = 0; y <= x; y++)
			free(grid[y]);
		free(grid);
	}
}
