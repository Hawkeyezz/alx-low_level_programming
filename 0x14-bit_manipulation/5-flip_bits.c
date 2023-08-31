#include "main.h"
#include <unistd.h>

/**
 * flip_bits - to count the digit of bits to chan   ge from one digit to another
 * @n: first digit
 * @m: second digit
 * Return: digit of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
int i, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
count++;
}
return (count);
}
