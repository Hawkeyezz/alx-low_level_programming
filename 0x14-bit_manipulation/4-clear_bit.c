#include "main.h"
#include <unistd.h>

/**                                                * clear_bit - it's setting the value of a given b   it to 0
 * @n: pointing to the number that's to change
 * @index: the index of the bit to clear
 * Return: 1 success, -1 failure                   */

int clear_bit(unsigned long int *n, unsigned int index)
                                                  {                                                 if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
