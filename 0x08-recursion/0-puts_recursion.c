#include "main.h"
/**
 * _puts_recursion - a function like puts();
 * @s: input
 * Return: Must be 0 (Success)
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
