#include <stdio.h>
#include "main.h"
/**
 * multiple - multiple of n,m within a limit
 * @n: int
 * Return: 1
 */
int multiple(int n)
{
	int i, sum;

	sum = 0;
	for (i = 0; i <= n; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum +  i;
		}
	}
	return (sum);
}
