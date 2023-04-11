#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**_islower - checks for lowercase character.
*@c: The character to check.
*Return: 1 for lowercase character or 0 for anything else
*/
int _islower(int c)
{
return (c >= 'a' && c <= 'z');
}
