#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - function that returns a pointer to a 2d array
 * @width:
 * @height:
 * Return:
 */


int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}


	grid = malloc(height);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width);
		if (grid[a] == NULL)
		{

			for (b = 0; b < a; b++)
			{
				free(grid[b]);
			}
			free(grid);
			return (NULL);
		}


		for (b = 0; b < width; b++)
		{
			grid[a][b] = 0;
		}
	}

	return (grid);
}
