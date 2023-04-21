#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - Prints numbers.
* @separator: The string to be printed.
* @n: number of integers passed.
* @...: variable number.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nm;
unsigned int ind;
va_start(nm, n);
for (ind = 0; ind < n; ind++)
{
printf("%d", va_arg(nm, int));
if (ind != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(nm);
}
