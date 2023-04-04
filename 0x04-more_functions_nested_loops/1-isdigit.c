#include "main.h"
/**
*_isdigit - check if is digit.
*@c: the num ber to be checked.
*Return: 1 for digit and 0 for otherwise.
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
