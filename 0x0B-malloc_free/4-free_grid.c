#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function to free two dimensional
 * @grid:its grid
 * @height: the height
 * Return:the free
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
