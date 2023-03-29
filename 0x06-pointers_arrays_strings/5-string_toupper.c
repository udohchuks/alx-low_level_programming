#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * string_toupper - converts to upper case
 * @s: lower case string
 * Return: Upper case string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = toupper(s[i]);
		i++;
	}
	return (s);
}
