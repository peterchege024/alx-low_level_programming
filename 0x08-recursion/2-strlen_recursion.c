#include "main.h"
/**
*_strlen_recursion - checks the length of string.
*@s: string to reverse
*Return: integer
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (_strlen_recursion(s) + 1);
}
