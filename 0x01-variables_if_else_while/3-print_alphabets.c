#include <stdio.h>
/**
* main - Entry point
*Return: 0 (Success)
*/
int main(void)
{
int lowerCase = 'a';
int upperCase = 'A';
while (lowerCase <= 'z')
{
putchar(upperCase);
upperCase += 1;
}
putchar('\n');
return (0);
}
