#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - Returns the sum of all its paramters
 * @n: The number of paramters passed  to the func
 * @...:A variable number
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int x, sum = 0;
va_start(ap, n);
for (x = 0; x < n; x++)
sum +=  va_arg(ap, int);
va_end(ap);
return (sum);
}
