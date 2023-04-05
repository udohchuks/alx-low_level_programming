#include "main.h"
/**
 * factorial - factorial
 * @n: number!
 * Return: factorial
 */
int factorial(int n)
{
	if (n  == 1)
	{
		return (1);
	}
	else if (n < 1)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
