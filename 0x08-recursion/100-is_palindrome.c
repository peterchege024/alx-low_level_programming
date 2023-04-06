#include "main.h"

int if_pal(char *s, int k, int l);
int _strlen_recursion(char *s);
/**
* is_palindrome - checks if palindrome
* @s: string to reverse
*
* Return: 1 if it is, 0 it's not
*/
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (if_pal(s, 0, _strlen_recursion(s)));
}
/**
* _strlen_recursion - returns the length of a string
* @s: string to calculate the length of
* Return: length of the string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
* if_pal - checks the characters recursively for palindrome
* @s: string to check
* @k: iterator
* @l: length of string
* Return: 1 if palindrome, 0 if not
*/
int if_pal(char *s, int k, int l)
{
if (*(s + k) != *(s + l - 1))
return (0);
if (k >= l)
return (1);
return (if_pal(s, k + 1, l - 1));
}
