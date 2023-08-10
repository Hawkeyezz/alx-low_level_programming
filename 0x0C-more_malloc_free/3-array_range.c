#include <stdlib.h>
#include "main.h"
/**
 * *array_range - arrays of integers
 * @min: the minimum range of values to be stored
 * @max: the maximum range of values to be stored and number of elements present
 * Return: points the array
 */

int *array_range(int min, int max)
{
int *ptr;
int i, size;

if (min > max)
return (NULL);
size = max - min + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
return (NULL);
for (i = 0; min <= max; i++)
ptr[i] = min++;
return (ptr);
}
