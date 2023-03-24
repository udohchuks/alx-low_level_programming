#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	long int i, j, max, prime;

	long int number;

	number = 612852475143;
	for (i = 1; i <= number / 2; i++)
	{
		if (number % i == 0)
		{
			for (j = 2; j < (i / 2); j++)
			{
				prime = 1;
				if (i % j == 0)
				{
					prime = 0;
					break;
				}
			}
		}
		if (prime)
		{
			max = i;
		}
	}
	printf("%ld\n", max);
	return (0);
}
