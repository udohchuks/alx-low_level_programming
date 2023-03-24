#include <stdio.h>
#include <ctype.h>
#include "main.h"
/*
 * _isupper - uppercase
 * @c: character
 * Return: 1 , 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
