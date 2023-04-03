#include "main.h"
#include <stdio.h>
/**
*swap_int - swaps value of two integers.
*@a: first swaped.
*@b: second swaped.
*Return: 0.
*/
void swap_int(int *a, int *b)
{
int change;
change = *a;
*a = *b;
*b = change;
}
