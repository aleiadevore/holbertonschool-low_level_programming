#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to two-dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to grid or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int x, y, z;
	int **grid;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(width * sizeof(int));
		if (grid[x] == NULL)
			return (NULL);
	}
	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
			grid[y][z] = 0;
	}
	return (grid);
}
