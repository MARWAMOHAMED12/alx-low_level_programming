#include "main.h"
#include <stdio.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height inut
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
int **mee;
int x, m;
if (width <= 0 || height <= 0)
return (NULL);
mee = malloc(sizeof(int *) * height);
if (mee == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
mee[x] = malloc(sizeof(int *) * width);
if (mee[x] == NULL)
{
for (; x >= 0; x--)
free(mee[x]);
free(mee);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (m = 0; m < width; m++)
mee[x][m] = 0;
}
return (mee);
}
