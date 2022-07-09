#include "main.h"
/**
*print_line - Draws a straight line using the character _
*@n: The number of _  characters to be printed
*/
void print_line(int n)
{
int places = n;
for (places = n; places > 0; places--)
_putchar('_');
_putchar('\n');
}
