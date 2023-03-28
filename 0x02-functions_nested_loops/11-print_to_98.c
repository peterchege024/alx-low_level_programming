#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints all numbers from k to 98.
* @k: value to be checked.
* Return: 0
*/
void print_to_98(int k)
{
if (k <= 98)
{
for (; k <= 98; k++)
{
if (k == 98)
{
printf("%d", k);
printf("\n");
break;
}
else
{
printf("%d, ", k)
}
}
}
}
