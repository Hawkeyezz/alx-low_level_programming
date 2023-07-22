#include "main.h"
/**
 * print_square - function that prints a square
 * @size: the size of a square
 * Description: can only use _putchar to print. make use of '#' to print the square.
 */
void print_square(int size)
{
int a, b;

b = 0;

if (size < 1)
_putchar('\n');

while (b < size)
{
a = 0;
while (a < size)
{
_putchar('#');
a++;
}
_putchar('\n');
b++;
}
}
