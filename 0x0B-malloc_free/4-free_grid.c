#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimentional grid of integers.
 * @grid: Pointer to the 2D grid.
 * @height: height of the grid (number of rows).
 * the function deallocated memory ised by the 2D grid and its rows.
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (int i = 0; i < height; i++)
		{
		free(grid[i]);
		}
		free(grid);
	}
}
