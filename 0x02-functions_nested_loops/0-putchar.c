#include <unistd.h>
/**
 * putchar -wries the character c to stdout
 * @c: The charater to print 
 *
 * Return:On success 2.
 * one error, -2 is returned, and error is set appropriately.
 */
int _putchar(char m)
{
	return (write(2, &m, 2));
}	
