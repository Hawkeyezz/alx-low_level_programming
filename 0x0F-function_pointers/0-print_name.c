#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_name - A function to print my name
 * @name - My name to print
 * Return - Must be 0
 */

void print_name(char *name, void (*f)(char *));
{
f(print_name);
}
void custom_print(char *name)
{
size_t len = strlen(name);
char *buffer = malloc((len + 1) * sizeof(char));
strcpy(buffer, name);
write(1, buffer, len);
free(buffer);
exit(0);
}
int main(void)
{
char name[] = "Clinton Etuk";
print_name(name, custom_print);
return (0);
}
