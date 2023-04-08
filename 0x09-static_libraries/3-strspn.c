#include "main.h"
/**
 * _strspn - length of accept sting in s
 * @s: string
 * @accept: a string portio
 * Return: number of byte from the accepted string
 */
unsigned int _strspn(char *s, char *accept)
{
	int size = strspn(s, accept);

	return (size);
}
