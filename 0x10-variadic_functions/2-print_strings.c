#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - Prints strings.
* @separator: string to be printed between strings.
* @n: The number of strings passed.
* @...: variable number of strings to be printed.
* Description: If separator is NULL, it is not printed.
* If one of the strings if NULL, (nil) is printed instead.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strs;
char *strg;
unsigned int ind;
va_start(strs, n);
for (ind = 0; ind < n; ind++)
{
str = va_arg(strs, char *);
if (strg == NULL)
printf("(nil)");
else
printf("%s", strg);
if (ind != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(strs);
}
