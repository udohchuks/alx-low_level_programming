#include <unistd.h>

/**
 * _putchar - Write the character c to stdout 
 * @c: the char
 *
 * Return \: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
