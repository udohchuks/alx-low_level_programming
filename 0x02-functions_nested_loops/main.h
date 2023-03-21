#include <unistd.h>
/**
 * _putchar - write a character c to std output
 *
 * Return: 1 if successful
 */
int _putchar( char c)
{
	return(write(1,&c,1));
}
