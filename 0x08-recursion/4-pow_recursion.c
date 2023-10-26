#include "main.h"
/**
 * _pow_recursion - a function returns the value of x raised to power of y
 * @x: the value to be raise
 * @y: the power
 * Return: result of the power
*/
int _pow_recursion(int x, int y)
{
/*base case*/
if (y < 0)
return (-1);
else if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
