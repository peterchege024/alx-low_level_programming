#include "main.h"
/**
*print_last_digit - prints last digit of a number.
*@n: Number to be chec
*Return: the last gigit of a umber.
*/
int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0')
return (last);
}
