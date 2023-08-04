#include "main.h"
/**
 * _isupper - examine for uppercase alphabets.
 * @c: using char to examine.
 * Return: 1 if it's uppercase, if it's not 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);

return (0);
}
