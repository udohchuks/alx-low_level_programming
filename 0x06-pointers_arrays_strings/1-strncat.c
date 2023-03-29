#include "main.h"
/**
 * _strncat - return a pointer of 2 strings with n src
 * @dest: destinarion string
 * @src: source string
 * @n: limit of src to be concatenated
 * Return: string literal
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
