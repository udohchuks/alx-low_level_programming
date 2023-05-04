#include "main.h"
/**
 * binary_to_uint - converts binary to decimal
 * @b: pointer string of binary number
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, pwr = 1, len = 0;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;
	while (len > 0)
	{
		if (b[len - 1] != '1' &&  b[len - 1] != '0')
			return (0);
		if (b[len - 1] == '1')
			dec += pwr;
		pwr *= 2;
		len--;
	}
	return (dec);
}
