#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D grid
 *
 * @grid: the grid to free
 * @height: the height of the grid
 *
 * Description: frees memory allocated for a 2D grid.
 */
void free_grid(int **grid, int height)
{
if (grid != NULL && *grid != NULL)
{
for (int i = 0; i < height; i++)
{
if (grid[i] != NULL)
{
free(grid[i]);
grid[i] = NULL;
}
}
free(grid);
grid = NULL;
}
}
