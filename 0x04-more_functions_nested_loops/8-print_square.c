#include "main.h"
/**
*print_square - Draws a straight line using the character _
*@size: The size of the square
*/
void print_square(int size)
{
int len;
int wid;
if (size > 0)
{
for (len = 0; len < size; len++)
{
for (wid = 0; wid < size; wid++)
_putchar('#');
if (len == size - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
