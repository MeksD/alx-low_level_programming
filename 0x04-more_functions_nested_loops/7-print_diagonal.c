#include "main.h"
/**
*print_diagonal - Draws a diagonal line using the character \
*
*@n: The number of '\' characters to be printed
*/
void print_diagonal(int n)
{
int line;
int space;
if (n > 0)
{
for (line = 1; line <= n; line++)
{
for (space = 1; space < line; space++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
if (line == n - 1)
continue;
}
}
else
_putchar('\n');
}
