#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
*_strncat - concatenate two strings.
*@dest: destination string pointer.
*@src: source string pointer.
*@n: number of bytes concatenated.
* Return: pointer to destination string.
*/
char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
