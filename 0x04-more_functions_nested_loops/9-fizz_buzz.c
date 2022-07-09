#include <stdio.h>
/**
*main - print numbers from 1 to 100,
*print multiples of 3 as Fizz,
*print multiples of 5 as Buzz
*and print multiple of both 3 and 5 as FizzBuzz
*Return: 0 on success
*/
int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if (n == 1)
printf("%d", n);
else if (n % 3 == 0 && n % 5 == 0)
printf(" FizzBuzz");
else if (n % 3 == 0)
printf(" Fizz");
else if (n % 5 == 0)
printf(" Buzz");
else
printf(" %d", n);
}
printf("\n");
return (0);
}
