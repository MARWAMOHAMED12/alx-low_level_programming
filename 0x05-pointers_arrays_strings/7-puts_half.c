#include "main.h"
/**
 * puts_half-printhalf of string
 * @str: parameter to be printed
 * Return:void
 */
void puts_half(char *str)
{
int len, i, half;
for (len = 0; str[len] != '\0'; len++)
{
;
}
half = (len - 1) / 2;
for (i = (half + 1); i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
