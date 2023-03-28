#include "main.h"
/**
* _puts - prints a string. 
* @str: pointer to strig.
* Return: string and new line
*/
void _puts(char *str)
{
int i = 0;
while (str[i])
{
putchar(str[i]);
i++;
}
putchar('\n');
}
