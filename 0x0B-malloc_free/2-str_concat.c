#include "main.h"
#include <stdlib.h>
/**
* str_concat - get end of input and add together for size
* @s1: input 1
* @s2: input 2
* Return: concat of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
char *conct;
int j, nj;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
j = nj = 0;
while (s1[j] != '\0')
j++;
while (s2[nj] != '\0')
nj++;
conct = malloc(sizeof(char) * (j + nj + 1));
if (conct == NULL)
return (NULL);
j = nj = 0;
while (s1[j] != '\0')
{
conct[j] = s1[j];
j++;
}
while (s2[nj] != '\0')
{
conct[j] = s2[nj];
j++, nj++;
}
conct[j] = '\0';
return (conct);
}
