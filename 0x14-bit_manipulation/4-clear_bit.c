#include "main.h"
/**
 * clear_bit - set bit at index to 0
 * @n: integer
 * @index: index
 * Return: 1 for success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
