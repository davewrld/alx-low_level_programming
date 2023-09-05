#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2D array allocatded to memory.
 * @grid: The 2D grid to free.
 * @height: The height of the grid.
 *
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
