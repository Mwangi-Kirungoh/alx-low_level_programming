#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the width of the 2D array
 * @height: the height of the 2D array
 *
 * Return: If width or height is 0 or negative, or if memory allocation fails -
 * NULL. Otherwise - a pointer to the 2D array.
 */
int **alloc_grid(int width, int height)
	{
	int **mee, i, j;

	if (width <= 0 || height <= 0)
	return (NULL);

	mee = malloc(height * sizeof(int *));
	if (mee == NULL)
	return (NULL);
	for (i = 0; i < height; i++)
	{
	mee[i] = malloc(width * sizeof(int));
	if (mee[i] == NULL)
								{
	while (i--)
	free(mee[i]);
	free(mee);
	return (NULL);
	}
	for (j = 0; j < width; j++)
	mee[i][j] = 0;
	}

	return (mee);
	}
