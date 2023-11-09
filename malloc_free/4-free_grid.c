#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: check the array is NULL
 * @height: check height is no positive
 * Return: Free grid
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
		return;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
