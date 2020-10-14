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
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
