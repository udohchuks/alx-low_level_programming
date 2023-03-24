#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: integer
 */
void print_triangle(int size)
{
	int i, s, j;

	for (i = 0; i < size; i++)
	{
		s = 1;
		while (s < size - i)
		{
			_putchar(' ');
			s++;
		}
		for (j = 0; j <= i; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
