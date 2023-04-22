#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* check_num - check dihit in a string
* @str: array str
* Return: Always 0 (Success)
*/
int check_num(char *str)
{
unsigned int cot;
cot = 0;
while (cot < strlen(str)) /*count string*/
{
if (!isdigit(str[cot])) /*check if str there are digit*/
{
return (0);
}
cot++;
}
return (1);
}
/**
* main - Print the name of the program
* @argc: Count arguments
* @argv: Arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int cot;
int str_to_int;
int sum = 0;
cot = 1;
while (cot < argc)
{
if (check_num(argv[cot]))
{
str_to_int = atoi(argv[cot]);
sum += str_to_int;
}
else
{
printf("Error\n");
return (1);
}
cot++;
}
printf("%d\n", sum);
return (0);
}
