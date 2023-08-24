#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;
k = 0;
       while (k < n && src[k] != '\0')
	{
dest[k] = src[k];
k++;
	}
	while (k < n)
	{
		
		k++;
	}
	return (dest);
}
