#include "main.h"
/**
 * _strstr - find string
 * @haystack: string
 * @needle: searched string
 * Return: pointer to found string
 */
char *_strstr(char *haystack, char *needle)
{
	char *s = strstr(haystack, needle);

	return (s);
}
