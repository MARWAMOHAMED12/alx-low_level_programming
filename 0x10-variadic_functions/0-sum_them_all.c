#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all parameters
 * @n: number passed to the function
 * @...:variables to sum
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int x;
va_list numbers;
unsigned int i;
int s;
x = 0;
va_start(numbers, n);
for (i = 0; i < n; i++)
{
if (n == 0)
return (0);
x = va_arg(numbers, int);
s += x;
}
va_end(numbers);
return (s);
}
