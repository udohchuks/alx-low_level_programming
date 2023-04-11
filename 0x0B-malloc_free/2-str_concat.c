#include "main.h"
/**
 * str_concat - string cat
 * @s1: string dest
 * @s2:string src
 * Return: pointer to cat string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int length;

	length = strlen(s1) + strlen(s2);
	str = malloc(sizeof(char) * length + 1);
	strcat(str, s1);
	strcat(str,s2);
	str[length + 1] = '\0';
	return (str);
}
