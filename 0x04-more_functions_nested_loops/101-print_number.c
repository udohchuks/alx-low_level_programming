#include "main.h"
#include <math.h>
/**
 * print_number - print number
 * @n: number
 * Return: length
 */
int myPow(int x,int n);
int lenHelper(unsigned x);

void print_number(int n)
{
	int is_neg, x, power, n_v;

	if (n < 0)
	{
		is_neg = 1;
	}
	x = lenHelper(n);
	n_v = abs(n);
	power = myPow(10, x);
	while (power != 0)
	{
		if (is_neg == 1)
		{
			_putchar(45);
		}
		_putchar(n_v / power);
		power /= 10;
	}
	_putchar(n_v % power);
	_putchar('\n');
}

int lenHelper(unsigned x)
{
	if (x >= 1000000000) return 10;
	if (x >= 100000000)  return 9;
	if (x >= 10000000)   return 8;
	if (x >= 1000000)    return 7;
	if (x >= 100000)     return 6;
	if (x >= 10000)      return 5;
	if (x >= 1000)       return 4;
	if (x >= 100)        return 3;
	if (x >= 10)         return 2;
	return 1;
}
int myPow(int x,int n)
{
	int i; /* Variable used in loop counter */
	int number = x;
	for (i = 0; i < n ; i++)
	{
		number *= number;
		return(number);
}
