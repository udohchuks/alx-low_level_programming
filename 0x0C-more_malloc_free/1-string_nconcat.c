#include "main.h"
#include <stdio.h>
/**
 * string_nconcat - string catenate
 * @s1: string 1
 * @s2: string 2
 * @n: limit
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len2;
	int len1, length;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	length = len1 + len2;
	str = malloc(length * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	strcat(str, s1);
	if (n >= len2)
	{
		strcat(str, s2);
	}
	else
	{
		strncat(str, s2, n);
	}
	return (str);
}
