#include "variadic_functions.h"
/**
 * sum_them_all - sum all arg
 * @n: integer
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list p;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(p, int);
	}
	va_end(p);
	return (sum);
}
