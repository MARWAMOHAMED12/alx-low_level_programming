#include <unistd.h>
/**
 * putchar -wries the character c to stdout
 * @c: The charater to print 
 *
 * Return:On success 1.
 * one error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}	
