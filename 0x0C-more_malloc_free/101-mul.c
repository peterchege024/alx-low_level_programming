#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
* is_digit - checks if a string contains non-digits
* @s: string.
* Return: 0 if a non-digit is found, 1 otherwise
*/
int is_digit(char *s)
{
int v = 0;
while (s[v])
{
if (s[v] < '0' || s[v] > '9')
return (0);
v++;
}
return (1);
}
/**
* _strlen - returns the length pf string
* @s: string to evaluate
* Return: the length of the string
*/
int _strlen(char *s)
{
int v = 0;
while (s[v] != '\0')
{
v++;
}
return (v);
}
/**
* errors - handles errors for main
*/
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
* main - multiplies two positive numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: always 0 (Success)
*/
int main(int argc, char *argv[])
{
char *s1, *s2;
int ln1, ln2, ln, v, c, dgt1, dgt2, *result, n = 0;
s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
ln1 = _strlen(s1);
ln2 = _strlen(s2);
ln = ln1 + ln2 + 1;
result = malloc(sizeof(int) * ln);
if (!result)
return (1);
for (v = 0; v <= ln1 + ln2; v++)
result[i] = 0;
for (ln1 = ln1 - 1; ln1 >= 0; ln1--)
{
dgt1 = s1[ln1] - '0';
c = 0;
for (ln2 = _strlen(s2) - 1; ln2 >= 0; ln2--)
{
dgt2 = s2[ln2] - '0';
c += result[ln1 + ln2 + 1] + (dgt1 * dgt2);
result[ln1 + ln2 + 1] = c % 10;
c /= 10;
}
if (c > 0)
result[ln1 + ln2 + 1] += c;
}
for (v = 0; v < ln - 1; v++)
{
if (result[v])
n = 1;
if (n)
_putchar(result[i] + '0');
}
if (!n)
_putchar('0');
_putchar('\n');
free(result);
return (0);
}
