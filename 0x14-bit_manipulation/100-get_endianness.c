#include "main.h"
/**
 * get_endianness - Evaluates if machine is little or big
 * Return: 0 and 1
 */
int get_endianness(void)
{
unsigned int k = 1;
char *c = (char *) &k;
return (*c);
}
