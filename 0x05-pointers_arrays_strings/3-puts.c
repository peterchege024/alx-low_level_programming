#include "main.h"
/**
* _puts - prints a string. 
* @str: String to print.
* Return: void
*/
void _puts(char str)
{
for (; str != '\0'; str++)
{
putchar(str);
}
putchar('\n');
}
