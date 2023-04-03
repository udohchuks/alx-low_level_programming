#include "main.h"
/**
 * _memcpy - copies src to dest for n char
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of character
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
