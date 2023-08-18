#include <unistd.h>

/**
 * _putchar - writes the character c to stdout 
 * @c: The character too print 
 *
 * Return: On success 1.
 * On error , -1 is returned , and error is set apptopriately.
 */
int  _putchar(cher c)
{
return ( write(1, &c, 1));
}
