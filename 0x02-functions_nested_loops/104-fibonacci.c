#include <stdio.h>
/**
 * main - first fib numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int x, y, z;

	int n;

	x = 1;
	y = 2;
	n = 98;
	printf("%lu, %lu", x, y);
	while (n > 2)
	{
		z = x + y;
		printf(", %lu", z);
		x = y;
		y = z;
		n -= 1;
	}
	printf("\n");
	return (0);
}

