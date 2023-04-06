#include "main.h"
#include <stdio.h>
int real_sqrt_recursion(int n, int k);
/**
* _sqrt_recursion - returns sqrt of a number
* @n: number 
* Return: square root
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (real_sqrt_recursion(n, 0));
}
/**
* _sqrt_recursion - recurses sqrt
* @n: number
* @k: iterator
* Return: the square root
*/
int real_sqrt_recursion(int n, int k)
{
if (k * k > n)
return (-1);
if (k * k == n)
return (k);
return (real_sqrt_recursion(n, k + 1));
}
