#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat -  function that concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * Return: The returned pointer point to a newly allocated space in memory
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
size_t size1, size2, size;
char *concat;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
size1 = strlen(s1);
size2 = strlen(s2);
size = size1 + size2;
concat = (char *)malloc(size + 1);
if (concat == NULL)
{
return (NULL);
}
strcpy(concat, s1);
strcat(concat, s2);
return (concat);
}
