#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */

void free_grid(int **grid, int height)
{
	int counti;

	for (counti = 0; counti < height; counti++)
	{
		free(grid[counti]);
	}
	free(grid);
}
