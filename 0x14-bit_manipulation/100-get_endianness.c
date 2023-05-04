#include "main.h"
/**
 * get_endianness - big or little
 * Return: 1 0r 0
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *)&a;

	return ((int)*c);
}
