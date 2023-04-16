#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: two dim array
 * @height: the height
 * Return: VOID
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		if (height >= 0)
		{
			free(grid[height]);
			--height;
		}
		free(grid);
	}
}
