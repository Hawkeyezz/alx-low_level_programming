#include <stdio.h>
/**
 * main - Still my entry point
 * Return: Must be 0 (Success)
 */

int main(void)
{
char c;

c = 'a';
while
(c <= 'z')
{
if ((c != 'q' && c != 'e') && c <= 'z')
putchar(c);
c++;
}
putchar('\n');
return (0);
}
