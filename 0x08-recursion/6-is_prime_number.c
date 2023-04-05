#include "main.h"
/**
 * prime - checks sub recursive func
 * @n: number
 * @x: factor
 * Return: 1 or 0
 */
int prime(int n, int x)
{
	if (x > (n / 2))
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	else
	{
		return (prime(n, x + 1));
	}
}
/**
 * is_prime_number - check if prime
 * @n: number
 * Return: 0 or  1
 */
int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}
	else
	{
		return (prime(n, 2));
	}
}
