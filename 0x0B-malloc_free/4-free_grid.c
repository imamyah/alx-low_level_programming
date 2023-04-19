#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimentional grid
 * created by your alloc_grid function
 * @grid: the grid to free
 * @height: the number of rows in the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
