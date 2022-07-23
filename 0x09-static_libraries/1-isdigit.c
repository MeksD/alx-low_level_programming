#include "main.h"
/**
*_isdigit - Check for digit 0 to 9
*@c: The character to check
*Return: 0 Success
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
