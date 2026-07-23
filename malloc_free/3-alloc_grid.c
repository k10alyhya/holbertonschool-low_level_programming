#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D integer array
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to the grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (; i < height; i++)
	{
		p[i] = malloc(width * sizeof(*p[i]));
		if (p[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(p[j]);
				j++;
			}
			free(p);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}

	return (p);
}