#include "main.h"
/**
 * _calloc - calloc
 * @nmemb: n
 * @size: size of type
 * Return: typeof
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;

	if (nmemb == 0)
		return (NULL);
	s = calloc(nmemb, size);
	if (s == NULL)
		return (NULL);
	return (s);
}
