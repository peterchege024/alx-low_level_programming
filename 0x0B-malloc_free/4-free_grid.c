#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* free_grid - 2d array
* @grid: 2d grid
* @height: height
* Description: frees memory of grid
* Return: 0
*/
void free_grid(int **grid, int height)
{
int m;
for (m = 0; m < height; m++)
{
free(grid[m]);
}
free(grid);
}
