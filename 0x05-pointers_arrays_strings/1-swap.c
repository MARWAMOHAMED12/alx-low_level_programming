#include "main.h"
/**
 * swp_int - swps the values of two integers
 * @a: integers to swp
 * @b: integers to swp
 */
void swp_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
