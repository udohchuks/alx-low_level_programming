#include <stdio.h>
/**
 * main - even  fib numbers
 * Return: 0
 */
int main(void)
{
	long int x, y, z, sum;

	int n;

	x = 0;
	sum = 0;
	y = 1;
	n = 50;
	z = 0;
	while (z < 4000001)
	{
		z = x + y;
		if (z % 2 == 0)
		{
			sum += z;
		}
		x = y;
		y = z;
		n -= 1;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
