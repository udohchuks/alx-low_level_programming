#include <stdio.h>
/**
 * main - Prints all possible combinations of two single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(48 + i);
			putchar(48 + j);
			if (i == 8)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
