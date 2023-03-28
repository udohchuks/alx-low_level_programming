#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts2 - prints after every two char
 * @str: strings
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str) - 1;
	for (i = 0; i <= len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
