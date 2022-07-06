#include "main.h"
/**
*print_letterbet_x10 - prints lowercase alpabets 10 times, each on a new line.
*/
void print_alphabet_x10(void)
{
int count;
char letter;
for (count = 0; count < 10; count++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
