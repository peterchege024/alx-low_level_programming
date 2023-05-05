#include "main.h"
/**
* get_bit - returns value of bits in decimal number
* @n: number
* @index: index
* Return: value of bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bit_vl;
if (index > 63)
return (-1);
bit_vl = (n >> index) & 1;
return (bit_vl);
}
