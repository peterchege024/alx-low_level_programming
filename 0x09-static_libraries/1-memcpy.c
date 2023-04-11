#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
*_memcpy - Entry point.
*@dest: input.
*@src: input.
*@n: input.
*Return: 0.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
return memcpy(dest, src, n);
}
