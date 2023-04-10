#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int value, cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		value = atoi(argv[argc - 1]);
		if (value < 0)
		{
			printf("0\n");
		}
		else
		{
			cent = ((value % 10) + (value / 10));
			printf("%d\n", cent);
		}
		return (0);
	}
}
