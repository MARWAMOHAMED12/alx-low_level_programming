#include "main.h"

/**
 * _isalpha - Function to check if c is a letter, lowercase or uppercase
 * @c: is the int thet will use for the argument of the Function
 * Return: 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
