#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function frees a 2 dimensional grid of intagers
 * previously created by alloc_grid fxn
 *
 * @grid: the address of the 2 dimensional grid
 * @height: height of the gring (number of rows)
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int j = 0;

	while (j < height)
	{
		free(grid[j]);
		j++;
	}
	free(grid);
}
