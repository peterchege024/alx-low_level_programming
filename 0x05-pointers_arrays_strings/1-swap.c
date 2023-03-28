#include <stdio.h>
/**
* swap_int - swaps value of two integers.
*@a: first integer to be swaped.
*@b: second integer to be swaped.
*@swapp: swap variable.
*Return: nothing.
*/
void swap_int(int *a, int *b, int swapp)
{
swapp = *a;
*a = *b;
*b = swapp;
}
