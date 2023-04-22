#include <stdio.h>
#include "main.h"
/**
* _atoi - converts a string to integer
* @s: string
* Return: the int converted from the string
*/
int _atoi(char *s)
{
int j, k, l, ln, m, dgt;
j = 0; k = 0; l = 0; ln = 0; m = 0; dgt = 0;
while (s[ln] != '\0')
ln++;
while (j < ln && m == 0)
{
if (s[j] == '-')
++k;
if (s[j] >= '0' && s[j] <= '9')
{
dgt = s[j] - '0';
if (k % 2)
dgt = -dgt;
l = l * 10 + dgt;
m = 1;
if (s[j + 1] < '0' || s[j + 1] > '9')
break;
m = 0;
}
j++;
}
if (m == 0)
return (0);
return (l);
}
/**
* main - multiplies two numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
int rst, nm1, nm2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
nm1 = _atoi(argv[1]);
nm2 = _atoi(argv[2]);
rst = nm1 *nm2;
printf("%d\n", rst);
return (0);
}
