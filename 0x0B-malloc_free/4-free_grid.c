#include "main.h"
#include <stdlib.h>

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

	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
