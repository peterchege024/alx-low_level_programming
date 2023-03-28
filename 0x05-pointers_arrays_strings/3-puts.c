#include "main.h"
#include "3-main.c"
/**
 * _puts - prints a string
 *@str: the string to be printed.
 * Return: void.
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
putchar(*str);
}
_putchar('\n');
}
