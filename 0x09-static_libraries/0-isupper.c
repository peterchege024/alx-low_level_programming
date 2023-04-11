#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
*_isupper - check if a letter is super.
*@c: the num ber to be checked.
*Return: 1 for upper letter and 0 for otherwise.
*/
int _isupper(int c)
{
return (c >= 'A' && c <= 'Z');
}
