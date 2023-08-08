#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - to free 2 dimensions of array
 * @grid: our 2 dimenension grid
 * @height: the height dimension of the grid
 * Return: Null
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
