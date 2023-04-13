#include "main.h"
/**
 * malloc_checked - malloc func
 * @b: size
 * Return: type of pointer
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
