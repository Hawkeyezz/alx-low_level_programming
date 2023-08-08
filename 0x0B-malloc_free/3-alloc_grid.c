#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - we are using a nested loop to make a grid
 * @width: our width input
 * @height: the height input
 * Return: the pointer to 2 dimension array
 */

int **alloc_grid(int width, int height)
{
int **mee;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);

mee = malloc(sizeof(int *) * height);
if (mee == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
mee[i] = malloc(sizeof(int) * width);
if (mee[i] == NULL)
{
for (; i >= 0; i--)
free(mee[i]);
free(mee);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
mee[i][j] = 0;
}
return (mee);
}
