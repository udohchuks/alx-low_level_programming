#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * cap_string - check the code
 *
 * @str: string
 * Return: string.
 */
char *cap_string(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (isspace(c) || c == '(' || c == ')' || c == '{' ||
			       	c == '}'  || c == '.' || c == '?' || c == '"' || 
				c == ';' || c == ',' || c == '!')
		{
			str[i + 1] = toupper(str[i + 1]);
			if (c == '\n')
			{
				str[i] = '\n';
			}
			if (c == '.')
			{
				str[i] = '.';
			}
			if (c == '\t')
			{
				str[i] = ' ';
			}
		}
		i++;
	}
	return (str);
}
