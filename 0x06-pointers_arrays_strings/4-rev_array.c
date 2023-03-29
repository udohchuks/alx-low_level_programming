#include "main.h"
/**
 * reverse_array - reverses num in an array
 * @a: pointer to array
 * @n: number of element in the array
 */
void reverse_array(int *a, int n)
{
	int i, mid, tmp;

	mid = n / 2;
	for (i = 0; i <= mid; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
