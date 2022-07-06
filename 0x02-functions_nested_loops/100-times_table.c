#include "main.h"
/**
*print_times_table - prints time table
*@n : use in times table
*Return:void
*/
void print_times_table(int n)
{
int a = 0, m, b;
if (n < 0 || n > 15)
return;
while (a <= n)
{
for (b = 0; b <= n; b++)
{
m = a * b;
if (b == 0)
_putchar('0' + m);
else if (m < 10)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + m);
}
else if (m < 100)
{
_putchar (' ');
_putchar('0' + m / 10);
_putchar('0' + m % 10);
}
else
{
_putchar('0' + m / 100);
_putchar('0' + (m - 100) / 10);
_putchar('0' + m % 10);
}
if (b < n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
a++;
}
}
