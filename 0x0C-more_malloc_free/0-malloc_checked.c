#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - we are allocating a memory using malloc
 * @b: our number of bytes to allocate to the memory
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}
