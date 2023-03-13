#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory of a 2D array
 * @grid: the 2D array freed
 * @height: the height of the array
 */

void free_grid(int **grid, int height)
{
	int i;
	int j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < i; j++)
		{
			free(grid[j]);
		}
		free(grid);
	}
}
