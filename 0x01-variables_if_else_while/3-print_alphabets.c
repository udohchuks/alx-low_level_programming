#include <stdio.h>

/**
 * main - print alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	char c, C;

	c = 'a';
	C = 'A';
	while (c <=  'z')
	{
		putchar(c);
		c++;
	}
	while (C <=  'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
