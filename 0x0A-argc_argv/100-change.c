#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - prints the minimum number of coin
* make change for an amount of money
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
int nm, z, rst;
int coins [] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
nm = atoi(argv[1]);
rst = 0;
if (nm < 0)
{
printf("0\n");
return (0);
}
for (z = 0; z < 5 && nm >= 0; z++)
{
while (nm >= coins[z])
{
rst++;
nm -= coins[z];
}
}
printf("%d\n", rst);
return (0);
}
