#include "main.h"
/**
 * _strncpy - copies string from src to dest
 * @dest: destination string
 * @src: source string
 * @n: limit
 * Return: string literal
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
