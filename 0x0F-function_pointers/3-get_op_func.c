#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - to pick the correct function to undergo the operation asked by a user.
 * @s: operator passed as argument.
 * Return: pointer to the function in line with the operator given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul}, {"/", op_div}, {"%", op_mod}, {NULL, NULL}};

int a = 0;
while (ops[a].op != NULL && *(ops[a].op) != *s)
a++;
return (ops[a].f);
}
