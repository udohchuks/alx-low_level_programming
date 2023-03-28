#include "main.h"
#include <string.h>
/**
 * puts_half - print the second half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i, len, mid;

	len = strlen(str);
	if ((len % 2) == 0)
	{
		mid = len / 2;
	}
	else
	{
		mid = (len - 1) / 2;
	}
	for (i = mid; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
