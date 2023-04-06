#include "main.h"
/**
 * is_palindrome - checks palindrome
 * @s: pointer to a string
 * Return: 1 for true and 0 for false
 */
int is_palindrome(char *s)
{
	int length = strlen(s);
	int i, check;

	check = 1;
	for (i = 0; i <= length / 2; i++)
	{
		if (s[i] != s[length - 1 - i])
		{
			check = 0;
			break;
		}
	}
	if (check)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
