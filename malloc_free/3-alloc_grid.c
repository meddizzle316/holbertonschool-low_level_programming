#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2d array of int
 * @width: width of array
 * @height: height of array
 * Return: a pointer to a 2d array of int
 */
int **alloc_grid(int width, int height)
{
	int **new_grid;
	int i, x;

	new_grid = malloc(sizeof(int) * (width + height));

	if (new_grid == NULL || width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		new_grid[i] = malloc(sizeof(int) * width);
		if (new_grid[i] == NULL)
		{
			free(new_grid[i]);
			return (NULL);
		}
		for (x = 0; x < width; x++)
		{
			new_grid[i][x] = 0;
		}
		free(new_grid);
	}
	return (new_grid);
}
