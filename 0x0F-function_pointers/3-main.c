#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of argument
 * @argv: array of element
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	p = get_op_func(argv[2]);
	result = p(a, b);
	printf("%d\n", result);
	return (0);
}
