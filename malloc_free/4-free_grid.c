#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created by alloc grid
 * @grid: pointer to 2d grid created by alloc_grid
 * @height: height of grid (how many arrays it has)
 * Return: return value
 */
void free_grid(int **grid, int height)
{
	int i;

	free(grid);
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
