#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - print str in the reverse order
 * @s: string
 */
void print_rev(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
