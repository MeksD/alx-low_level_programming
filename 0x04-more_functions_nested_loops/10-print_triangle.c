#include "main.h"
/**
*print_triangle - Print a triangle
*@size: The size of the triangle
*Return: void.
*/
void print_triangle(int size)
{
int opp;
int adj;
for (opp = 0; opp < size; opp++)
{
for (adj = 1; adj < (size - opp); adj++)
_putchar(' ');
for (adj--; adj < size; adj++)
_putchar('#');
if (opp < (size - 1))
_putchar('\n');
}
_putchar('\n');
}
