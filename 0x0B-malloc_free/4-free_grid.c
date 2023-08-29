#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees previous alloc_grid function.
 * @grid: The 2-dimensional array to be freed.
 * @height: of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)

		free(grid[i]);
	free(grid);
}

