#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - we return the sum of two digits here.
 * @a: first digit.
 * @b: second digit.
 * Return: Must be sum of a and b.
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - we return the difference of two digit.
 * @a: first digit.
 * @b: second digit.
 * Return: Must be difference of a and b.
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - to return the product of two digit.
 * @a: first digit.
 * @b: second digit.
 * Return: product of a and b.
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - to return the division of two digits.
 * @a: first digit.
 * @b: second digit.
 * Return: div of a and b.
 */

int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - to return the remainder of the division of two digits.
 * @a: The first digit.
 * @b: The second digit.
 * Return: The result of the division of a by b.
 */

int op_mod(int a, int b)
{
return (a % b);
}
