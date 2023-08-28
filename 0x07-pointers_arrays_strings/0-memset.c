#include "main.h"
/**
 *_memset - fill a block of memory wiht a specifc value
 * @s: string address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int m = 0;
for (; n > 0; m++)
{
s[m] = b;
n--;
}
return (s);
}
