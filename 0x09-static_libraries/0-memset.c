#include "main.h"
/**
 * _memset - A program that fills a block of memory with a certain value.
 * @s: first address of memory that will be filled
 * @b: choosen value
 * @n: the number of bytes to be changed
 * Return: must change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
