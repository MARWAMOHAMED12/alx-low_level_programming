#include "main.h"

/**
 * _strcat - concatenates two string
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int m;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		dest[i] = src[m];
		i++;
		m++;
}

	dest[i] = '\0';
	return (dest);
}
