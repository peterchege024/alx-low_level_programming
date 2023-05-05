#include "main.h"
/**
* binary_to_uint - Converts binary number to unsigned int
* @b: string containing number
* Return: number
*/
unsigned int binary_to_uint(const char *b)
{
int k;
unsigned int dec_vl = 0;
if (!b)
return (0);
for (k = 0; b[k]; k++)
{
if (b[k] < '0' || b[k] > '1')
return (0);
dec_vl = 2 * dec_vl + (b[i] - '0');
}
return (dec_vl);
}
