#include "main.h"
/**
 * print_most_numbers - print 1 to 9
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(48 + i);
		}
	}
	_putchar('\n');
}
