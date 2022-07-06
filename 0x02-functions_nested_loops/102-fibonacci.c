#include <stdio.h>
/**
*main - prints the first 50 Fibonacci numbers
*Return: always 0
*/
int main(void)
{
int i = 0;
long int c = 1, d = 2, next;
printf("%lu, %lu, ", c, d);
i = 2;
while (i < 50)
{
next = c + d;
c = d;
d = next;
printf("%lu", next);
if (i > 48)
{
printf("\n");
break;
}
printf(", ");
i++;
}
return (0);
}
