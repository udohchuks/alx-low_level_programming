#include "main.h"
#include <ctype.h>
/**
 * _isdigit - Check digit
 * @c: interger
 * Return: 1
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
