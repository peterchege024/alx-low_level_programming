#include "main.h"
#include <stdio.h>
int exact_prime(int n, int k);
/**
*is_prime_number - check if prime number or not
*@n: number to check
*Return: 1 if prime number, 0 if not
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (exact_prime(n, n - 1));
}
/**
*exact_prime - checks if prime recursively
*@n: number to evaluate
*@k: iterator
*Return: 1 if is prime, 0 if not
*/
int exact_prime(int n, int k)
{
if (k == 1)
return (1);
if (n % k == 0 && k > 0)
return (0);
return (exact_prime(n, k - 1));
}
