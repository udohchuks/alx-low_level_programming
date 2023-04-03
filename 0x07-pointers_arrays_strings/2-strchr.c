#include "main.h"
/**
 * _strchr - find for a char
 * @s: string
 * @c: char to be searched
 * Return: pointer to the location of c or Null if not found
 */
char *_strchr(char *s, char c)
{
	char *set = strchr(s, c);

	return (set);
}
