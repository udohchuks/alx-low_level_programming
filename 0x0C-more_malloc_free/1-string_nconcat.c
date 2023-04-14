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
	int i, len1, length;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	length = len1 + n + 1;
	str = malloc(length * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
		str[i] = s1[i];
	if (n >= len2)
	{
		strcat(str, s2);
	}
	else
	{
		strncat(str, s2, n);
	}
	printf("%ld", sizeof(str));
	return (str);
}
