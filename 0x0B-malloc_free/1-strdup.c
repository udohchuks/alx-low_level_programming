#include "main.h"
/**
 * _strdup - copies string
 * @str: string
 * Return: pointer to duplicate string
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	return (strdup(str));
}
