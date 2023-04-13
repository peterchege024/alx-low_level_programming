#include <stdlib.h>
#include "main.h"
/**
*count_word - count the number of words in a string
*@s: string to evaluate
*Return: number of words
*/
int count_word(char *s)
{
int e, f, g;
e = 0;
g = 0;
for (f = 0; s[f] != '\0'; f++)
{
if (s[f] == ' ')
e = 0;
else if (e == 0)
{
e = 1;
}
return (g);
}
/**
* **strtow - string into words
* @str: string to split
* Return: pointer to an array of strings (Success)
* or NULL (Error)
*/
char **strtow(char *str)
{
char **trix, *tm;
int j, m = 0, ln = 0, wds, c = 0, strt, nd;
while (*(str + ln))
ln++;
wds = count_word(str);
if (wds == 0)
return (NULL);
trix = (char **) malloc(sizeof(char *) * (wds + 1));
if (trix == NULL)
return (NULL);
for (j = 0; j <= ln; j++)
{
if (str[j] == ' ' || str[j] == '\0')
{
if (c)
{
nd = j;
tm = (char *) malloc(sizeof(char) * (c + 1));
if (tm == NULL)
return (NULL);
while (strt < nd)
*tm++ = str[strt++];
*tm = '\0';
trix[m] = tm - c;
m++;
c = 0;
}
}
else if (c++ == 0)
strt = j;
}
trix[m] = NULL;
return (trix);	
}
