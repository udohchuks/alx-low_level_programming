#include <ctype.h>
#include "main.h"
/**
 * _islower - return 0 for Upper case and not 1 otherwise
 * @c: single character
 * Return: 1 or !1
 */
int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
