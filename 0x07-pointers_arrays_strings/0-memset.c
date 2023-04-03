#include "main.h"
/**
 * _memset - fills the memory location of n chae  with a char
 * @s: pointer to the memmory location
 * @b: char to fill
 * @n: number of char to fill
 * Return: pointer to str
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
