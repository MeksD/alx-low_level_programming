#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_strings - Prints strings, followed by a new line.
*@separator: The string to be printed between strings.
*@n: The number of strings passed to the function.
*@...: A variable number of strings to be printed.
*
*Description: If separator is NULL, it is not printed.
*If one of the strings if NULL, (nil) is printed instead.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;
char *string;
if (n > 0)
{
va_start(args, n);
while (i < n)
{
string = va_arg(args, char *);
if (string == NULL)
printf("%s", "(nil)");
else
printf("%s", string);
if (i != n - 1 && separator != NULL)
printf("%s", separator);
i++;
}
va_end(args);
}
printf("\n");
}
