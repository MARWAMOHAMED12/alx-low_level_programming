#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: The size of the arr
 * @c: the Initial value
 * Return: Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;
/*First Condition*/
if (size == 0)
{
return (NULL);
}
p = (char *)malloc(sizeof(char) * size);
/*Second condition*/
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < size ; i++)
{
p[i] = c;
}
return (p);
}
