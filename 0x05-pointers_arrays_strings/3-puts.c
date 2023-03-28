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
<<<<<<< HEAD
putchar(*str);
=======
putchar(str[i]);
i++;
>>>>>>> 5424dcd87e9f707e427ce12ef3240d55750202a9
}
putchar('\n');
}
