#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - Returns the sum of paramters.
* @n: paramters.
* @...: variable number.
* Return: If n == 0 - 0.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list pm;
unsigned int z, sum = 0;
va_start(pm, n);
for (z = 0; z < n; z++)
sum += va_arg(pm, int);
va_end(pm);
return (sum);
}
