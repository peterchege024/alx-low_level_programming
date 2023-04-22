#include <stdlib.h>
#include "main.h"
/**
* *string_nconcat - concatenates n bytes of a string to other string
* @s1: first string
* @s2: second string
* @n: number of bytes from s2 to concatenate to s1
* Return: pointer to the resulting string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int y = 0, z = 0, ln1 = 0, ln2 = 0;
while (s1 && s1[ln1])
ln1++;
while (s2 && s2[ln2])
ln2++;
if (n < ln2)
s = malloc(sizeof(char) * (ln1 + n + 1));
else
s = malloc(sizeof(char) * (ln1 + ln2 + 1));
if (!s)
return (NULL);
while (y < ln1)
{
s[y] = s1[y];
y++;
}
while (n < ln2 && y < (ln1 + n))
s[y++] = s2[z++];
while (n >= ln2 && y < (ln1 + ln2))
s[y++] = s2[z++];
s[y] = '\0';
return (s);
}
