#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
*_strspn - Entry point.
*@s: input.
*@accept: input
*Return: 0.
*/
unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
