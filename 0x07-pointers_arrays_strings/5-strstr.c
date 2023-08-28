#include "main.h"
/**
 * _strstr -  Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *L = haystack;
		char *P = needle;

		while (*L == *P && *P != '\0')
		{
			L++;
			P++;
		}

		if (*P == '\0')
			return (haystack);
	}
	return (0);
}
