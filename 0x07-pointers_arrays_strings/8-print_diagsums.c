#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum the diagonal
 * @a: array
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i, j, id;
	unsigned int sum1, sum2;

	sum1 = 0;
	id = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += a[id];
			}
			if (i + j == size - 1)
			{
				sum2 += a[id];
			}
			else
			{
				sum2 += 0;
			}
			id++;
		}
	}
		printf("%d, %d\n", sum1, sum2);
}
