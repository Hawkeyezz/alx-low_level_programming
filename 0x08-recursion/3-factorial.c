#include "main.h"
/**
 * factorial - a function to return the factorial of a given number.
 * @n: the number to return the factorial from.
 * Return: Must be factorial of n
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
