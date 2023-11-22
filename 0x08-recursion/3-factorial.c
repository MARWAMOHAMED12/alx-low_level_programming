#include "main.h"
/**
* factorial - function that returns the factorial of a given number
* @n: number to get his factorial
* Return: factorial of n
*/
int factorial(int n)
{
/*base case*/
if (n < 0)
{
return (-1);
}
else if (n == 0)
return (1);
return (n * factorial(n - 1));
}
