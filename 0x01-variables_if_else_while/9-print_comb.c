#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	
	for (a = 0; a <= 9 ; a++)
	{
		putchar(48 + a);
		if (a == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}	
