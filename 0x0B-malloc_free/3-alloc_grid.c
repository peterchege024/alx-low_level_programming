#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - make grid
* @width: input
* @height: input
* Return: 0
*/
int **alloc_grid(int width, int height)
{
int **gk;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
gk = malloc(sizeof(int *) * height);
if (gk == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
gk[i] = malloc(sizeof(int) * width);
if (gk[i] == NULL)
{
for (; i >= 0; i--)
free(gk[i]);
free(gk);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
gk[i][j] = 0;
}
return (gk);
}
