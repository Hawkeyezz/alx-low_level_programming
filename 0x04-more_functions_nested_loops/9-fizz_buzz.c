#include <stdio.h>
/**
 * main - the function that prints the number from 1-100, but for the multiples of three,
 *  Fizz is printed instead of the number, for multiples of five,
 *  Buzz, and for the multiples of both three and five, FizzBuzz.
 *
 *  Return: Must be 0.
 */
int main(void)
{
int num;

for (num = 1; num <= 100; num++)
{
if ((num % 3) == 0 && (num % 5) == 0)
printf("FizzBuzz");

else if ((num % 3) == 0)
printf("Fizz");

else if ((num % 5) == 0)
printf("Buzz");

else
printf("%d", num);

if (num ==100)
      continue;
printf(" ");
}

printf("\n");

return (0);
}
