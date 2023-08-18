#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function to print numbers, followed by a new line.
 * @separator: our string to be printed through numbers.
 * @n: our number of integers passed to the function.
 * @... : number variables of numbers that will be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int index;
va_start(nums, n);
for (index = 0; index < n; index++)
{
printf("%d", va_arg(nums, int));
if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(nums);
}
