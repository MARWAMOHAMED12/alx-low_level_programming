#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of args
 * @argc: argment count
 * @argv: srgument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
