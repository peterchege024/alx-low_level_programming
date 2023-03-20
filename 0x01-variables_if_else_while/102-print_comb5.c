#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: 0 on success
 */
int main(void)
{
int n = '0';
int m = '0';
for (n = 0; n <= 99; n++)
{
for (m = 0; m <= 99; m++)
{
if (n < m && n != m)
{
putchar((n / 10) + '0');
putchar((n % 10) + '0');
putchar(' ');
putchar((m / 10) + '0');
putchar((n % 10) + '0');
if (n != 98 || m != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n')	
return (0);
}
