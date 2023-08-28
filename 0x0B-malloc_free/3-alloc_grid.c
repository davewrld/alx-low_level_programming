#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns pointer to a 2-dimensional array each int at 0.
 * @width: of the 2-dimensional array.
 * @height: of the 2-dimensional array.
 *
 * Return: if width <= 0, height <= 0, else function fail -NULL.
 *         otherwise pointer to the 2-dimensional array of array of integers.
 *
 */
int **alloc_grid(int width, int height)
{
	int **twoD;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(height * sizeof(int *));

	if (twoD == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		twoD[i] = malloc(width * sizeof(int));

		if (twoD[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(twoD[j]);

			free(twoD);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			twoD[i][j] = 0;
	}

	return (twoD);

}
