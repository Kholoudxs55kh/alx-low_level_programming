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
	for (; height >= 0; height--)
		free(grid[height]);
	free(grid);
	}
}
