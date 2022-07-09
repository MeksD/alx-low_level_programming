#include "main.h"
/**
*print_most_numbers - Print digit 0 to 9 excluding 2 and 4
*Return: 0 Success
*/
void print_most_numbers(void)
{
char a;
for (a = '0'; a <= '9'; a++)
{
if (a != '2' && a != '4')
_putchar(a);
}
_putchar('\n');
}
