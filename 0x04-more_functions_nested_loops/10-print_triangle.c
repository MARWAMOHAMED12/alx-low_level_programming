#include "main.h"
/**
 * print_triangle - print a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int m, k;
for (m = 1; m <= size; m++)
{
for (k = m; k < size; k++)
{
_putchar(' ');
}
for (k = 1; k <= m; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
