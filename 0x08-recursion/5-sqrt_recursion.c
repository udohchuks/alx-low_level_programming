#include "main.h"

/**
 * root - find the root by recursively incrementing
 * @n: number whose root is to be found
 * @x: root of n
 * Return: x
 */
int root(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x *  x < n)
	{
		return(root(n, x + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - sqrt
 * @n: number
 * Return: sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (root(n, 2));
	}
}
