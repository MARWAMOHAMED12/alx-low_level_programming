#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int m;
	int k;

	for (m = 0; m < 8; m++)
	{
		for (k = 0; k < 8; k++)
			_putchar(a[m][k]);
		_putchar('\n');
	}
}
