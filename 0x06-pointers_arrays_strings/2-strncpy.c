#include "main.h"
/**
 *_strncpy - counting bytes.
 *@dest: destination string pointer.
 *@src: source string pointer.
 *@n: number of bytes counted.
 * Return: number of byte count.
 */
char *_strncpy(char *dest, char *src, int n)
{
int byte_count;

for (byte_count = 0; byte_count < n && src[byte_count] != '\0'; byte_count++)
dest[byte_count] = src[byte_count];

for (; byte_count < n; byte_count++)
dest[byte_count] = '\0';

return (dest);
}
