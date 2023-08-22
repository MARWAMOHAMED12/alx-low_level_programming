#include "main.h"

/**
 * print_array - print n elements of array of integers
 * @a: arrae to be used
 * @n: number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i < n - 1)
printf("%d, ", a[i]);
else
Printf("%d", a[i]);
}
printf("\n");
}
