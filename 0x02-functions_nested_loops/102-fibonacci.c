#include <stdio.h>
/**
 * main - first fib numbers
 * Return: 0
 */
int main(void)
{
	long int x, y, z;

	int n;

	x = 1;
	y = 2;
	n = 50;
	printf("%ld, %ld, ", x, y);
	while (n >= 1)
	{
		z = x + y;
		printf("%ld, ", z);
		x = y;
		y = z;
		n -= 1;
	}
	return (0);
}
