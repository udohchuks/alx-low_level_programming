#include "main.h"
#include <stdio.h>
/**
 * rot13 - rot13 encoding
 * @str: string
 * Return: string
 */
char *rot13(char *str)
{
	char let1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char let2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; let1[j] != '\0'; j++)
		{
			if (str[i] == let1[j])
			{
				str[i] = let2[j];
				break;
			}
		}
		i++;
	}
	return (str);
}

