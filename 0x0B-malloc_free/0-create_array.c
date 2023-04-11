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
	unsigned int i;

	if (!size)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * 98);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	p[i] = '\0';
	return (p);
}
