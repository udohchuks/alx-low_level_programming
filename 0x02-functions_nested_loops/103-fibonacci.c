#include <stdio.h>
/**
 * main - even  fib numbers
 * Return: 0
 */
int main(void)
{
	long int x, y, z;

	int n;

	x = 1;
	y = 2;
	n = 50;
	printf("%ld, %ld", x, y);
	while (n > 1)
	{
		z = x + y;
		if (z % 2 == 0)
		{
			printf(", %ld", z);
		}
		x = y;
		y = z;
		n -= 1;
	}
	printf("\n");
	return (0);
}
