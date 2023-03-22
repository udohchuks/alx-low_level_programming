#include "main.h"
/**
 * jack_bauer - prints minutes
 * Return: minutes
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (j > i)
			{
				_putchar(48 + (i / 10));
				_putchar(48 + (i % 10));
				_putchar(':');
				_putchar(48 + (j / 10));
				_putchar(48 + (j % 10));
				_putchar('\n');
			}
		}
	}
}
