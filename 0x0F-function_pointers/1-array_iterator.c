#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - to print each array of element on a newline
 * @array: our array
 * @size: figure of element to print
 * @action: the pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
