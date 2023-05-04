#include "main.h"
/**
 * set_bit - at the index to 0
 * @n: interger
 * @index: index
 * Return: 0 for success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);
	*n = *n | (1 << index);
	return (0);
}
