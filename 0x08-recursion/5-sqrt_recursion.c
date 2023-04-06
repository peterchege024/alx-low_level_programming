#include "main.h"
#include <stdio.h>
/**
*_sqrt_recursion - returns square root of a number.
*@n: the number.
*@k: the iteration number
*Return: squreroot.
*/
int _sqrt_recursion(int n, int k)
{
int sqrt = k * k;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (k);
return (_sqrt(n, k + 1));
}
