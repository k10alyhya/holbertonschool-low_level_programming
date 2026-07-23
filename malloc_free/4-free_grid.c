#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two-dimensional grid
 * @grid: pointer to the two-dimensional grid
 * @height: number of rows in the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}