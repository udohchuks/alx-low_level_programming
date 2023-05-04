#include "main.h"
/**
 * flip_bits - number of bits to be flpipped
 * @n: integer 1
 * @m: integer 2
 * Return: number of integers to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m;
	int count = 0;

	while (XOR)
	{
		count += (XOR & 1);
		XOR = XOR >> 1;
	}
	return (count);
}
