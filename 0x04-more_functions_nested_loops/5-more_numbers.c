#include "main.h"
/**
 * more_numbers - print 1 to 9
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 9)
			{
				_putchar(48 + j);
			}
			else
			{
				_putchar(48 + (j / 10));
				_putchar(48 + (j % 10));
			}
		}
		_putchar('\n');
	}
}
