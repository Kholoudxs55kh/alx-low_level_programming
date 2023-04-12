#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: the width
 *@height: the height
 *Return: NULL or value
 */
int **alloc_grid(int width, int height)
{
	int **grid, k, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * 8);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < height; k++)
	{
		grid[k] = malloc(width * 4);
		if (grid[k] == NULL)
		{
			for (; k >= 0; k--)
				free(grid[k]);
			free(grid);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
		for (h = 0; h < width; h++)
			grid[k][h] = 0;

	return (grid);
}
