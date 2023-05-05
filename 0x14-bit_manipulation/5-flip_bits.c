#include "main.h"
/**
* flip_bits - counts number of bits to change
* @n: First number
* @m: Second number
* Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int k, cnt = 0;
unsigned long int ct;
unsigned long int ecl = n ^ m;
for (k = 63; k >= 0; k--)
{
ct = ecl >> i;
if (ct & 1)
cnt++;
}
return (cnt);
}
