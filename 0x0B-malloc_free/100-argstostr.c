#include "main.h"
#include <stdlib.h>
/**
* argstostr - main entry
* @ac: input
* @av: double
* Return: 0
*/		
char *argstostr(int ac, char **av)
{
int j, k, m, z = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (j = 0; j < ac; j++)
{
for (k = 0; av[j][k]; k++)
z++;
}
z += ac;
str = malloc(sizeof(char) * z + 1);
if (str == NULL)
return (NULL);
for (j = 0; j < ac; j++)
{
for (k = 0; av[j][k]; k++)
{
str[m] = av[j][k];
m++;
}
if (str[m] == '\0')
{
str[m++] = '\n';
}
}
return (str);	
}
