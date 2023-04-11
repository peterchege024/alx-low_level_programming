#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
*_strncpy - counting bytes.
*@dest: destination string pointer.
*@src: source string pointer.
*@n: number of bytes counted.
* Return: number of byte count.
*/
char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
