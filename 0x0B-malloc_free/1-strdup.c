#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *mmm;

	int x, i = 0;

	if (str == NULL)
		return (NULL);
	x = 0;

	while (str[x] != '\0')

		x++;

	mmm = malloc(sizeof(char) * (x + 1));

	if (mmm == NULL)

		return (NULL);

	for (i = 0; str[i]; i++)
		mmm[i] = str[i];

	return (mmm);
}
