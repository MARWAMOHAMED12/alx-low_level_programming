#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of arry
 * Return: void
 */
void reverse_array(int *a, int n)
{
int m, k;
for (m = 0; m < n--; m++)
{
k = a[m];
a[m] = a[n];
a[n] = k;
}
}
