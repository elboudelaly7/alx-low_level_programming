#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - annnuuuubbiiiiissssss
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: hakuna matata
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int t;

	for (t = 0; t < height; t++)
	{
		free(grid[t]);
	}
	free(grid);
}
