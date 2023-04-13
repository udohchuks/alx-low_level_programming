#include "main.h"
#include <stdio.h>
/**
 * array_range - array range
 * @min: min
 * @max: max
 * Return: array of int
 */
int *array_range(int min, int max)
{
	int *p, size, i;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	p = malloc(size * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
