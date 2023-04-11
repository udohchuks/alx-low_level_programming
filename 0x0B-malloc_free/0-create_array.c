#include "main.h"
/**
 * create_array - create an array with malloc
 * @size: size of malloc memory
 * @c: character
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	if (!size)
	{
		return (NULL);
	}
	p = malloc(sizeof(c) * 98);
	for (i = 0; i < 98; i++)
	{
		p[i] = c;
	}
	p[i] = '\0';
	return (p);
}
