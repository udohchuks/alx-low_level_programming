#include "main.h"
/**
 * times_table - times table
 * Return: times table (1-9)
 */
void times_table(void)
{
	int i, j, tb;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			tb = i * j;
			if (tb < 10)
			{
				_putchar(48 + tb);
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				if ((i  * (j + 1)) < 10)
				{
					if (j < 9)
					{
						_putchar(' ');
					}
				}
			}
			else if (j < 9)
			{
				_putchar(48 + (tb / 10));
				_putchar(48 + (tb % 10));
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(48 + (tb / 10));
				_putchar(48 + (tb % 10));
			}
		}
		_putchar('\n');
	}
}
