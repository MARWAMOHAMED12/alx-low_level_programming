#include "main.h"

/**
 * print_alphabet_x10 -Make alphabet x10 times
 *Return:void 
 */

void print_alphabet_x10(void)
{

char ch;
int m;
m = 0;
while (m < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
m++;
}



}
