#include "main.h"
/**
 * _strpbrk - return a pointer to the first localized char
 * @s: string
 * @accept: substring
 * Return: pointer to the first localized string
 */
char *_strpbrk(char *s, char *accept)
{
	char *t = strpbrk(s, accept);

	return (t);
}
