#include "main.h"
/**
*_isalpha - checks for lowercase character.
*@c: The character to check.
*Return: 1 for lowercase character or 0 for anything else
*/
int _isalphs(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
