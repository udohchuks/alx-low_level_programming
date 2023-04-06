#include "main.h"
/**
 * palindrome - checks palindrome
 * @s: pointer string
 * @high: length -1
 * @low: 0
 * Return: 0 or 1
 */
int palindrome(char *s, int high, int low)
{
	if (low >= high)
	{
		return (1);
	}
	else if (s[low] != s[high])
	{
		return (0);
	}
	else
	{
		return (palindrome(s, high - 1, low + 1));
	}
}
/**
 * is_palindrome - checks palindrome
 * @s: pointer to a string
 * Return: 1 for true and 0 for false
 */
int is_palindrome(char *s)
{
	int length = strlen(s);
	int low = 0;
	int high = length - 1;

	if (length == 0)
	{
		return (1);
	}
	else
	{
		return (palindrome(s, high, low));
	}
}
