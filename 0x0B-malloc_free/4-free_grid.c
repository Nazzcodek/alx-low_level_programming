#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that free 2D grid
 *
 * @grid: grid to be free
 * @height: height of the grid
 *
 * Return: freed grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
