#include "function_pointers.h"

/**
 * int_index - to return the index place if comparison = true, if not -1
 * @array: our array
 * @size: the size of elements in our array
 * @cmp: the pointer to function of one of the 3
 * Return: Must be 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
