#include "main.h"
/**
* print_binary - Prints binary equivalent of a decimal number
* @n: number
* Return: number.
*/
void print_binary(unsigned long int n)
{
int k, cnt = 0;
unsigned long int ct;
for (k = 63; k >= 0; k--)
{
ct = n >> k;
if (ct & 1)
{
_putchar('1');
cnt++;
}
else if (cnt)
_putchar('0');
}
if (!cnt)
_putchar('0');
}
