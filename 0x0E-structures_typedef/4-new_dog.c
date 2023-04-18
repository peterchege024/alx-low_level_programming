#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns length of a string
* @s: string
* Return: the length of the string
*/
int _strlen(char *s)
{
int k;
k = 0;
while (s[k] != '\0')
{
k++;
}
return (k);
}
/**
* *_strcpy - copies the string pointed to by src
* @dest: pointer to the buffer in which we copy the string
* @src: string to be copied
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int ln, j;
ln = 0;
while (src[ln] != '\0')
{
ln++;
}
for (j = 0; j < ln; j++)
{
dest[j] = src[j];
}
dest[j] = '\0';
return (dest);
}
/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: new dog (Success), NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int ln1, ln2;
ln1 = _strlen(name);
ln2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (ln1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (ln2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
