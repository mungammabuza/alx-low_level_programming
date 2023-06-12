#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns ptr to array of ints
 * @width: width
 * @height: height
 *
 * Return: ptr to grid
 */
int **alloc_grid(int width, int height)
{
	int **grd;
	int x;
	int y;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	grd = malloc(sizeof(int *) * height);

	if (grd == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		grd[x] = malloc(sizeof(int) * width);
		if (grd[x] == NULL)
		{
			free(grd);
			for (y = 0; y <= x; y++)
			{
				free(grd[y]);
			}
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			grd[x][y] = 0;
		}
	}
	return (grd);
}
