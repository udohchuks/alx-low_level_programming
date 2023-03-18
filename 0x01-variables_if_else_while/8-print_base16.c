#include <stdio.h>

/**
 * main - print alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	char  c;

	int a;

	a = 0;
	c = 'a';
	while (a <=  9)
	{
		putchar(48 + a);
		a++;
	}
	while (c <=  'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
