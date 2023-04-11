#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * change  - calc change
 * @value: value
 * Return: change
 */
int change(int value)
{
	int cent = 0;
	int i;

	for (i = 0; i < 2; i++)
	{
		if (value > 30)
		{
			cent += ((value / 25));
		}
		else if (value > 20)
		{
			cent += (value % 10) + 1;
		}
		else if (value >= 20)
		{
			cent += value / 10;
		}
		else if (value > 10)
		{
			cent += value % 10;
		}
		else
		{
			cent += value;
		}
		value = value % 25;
	}
	return (cent);
}
/**
 * main - Entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int value;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		value = atoi(argv[argc - 1]);
		if (value <= 0)
		{
			printf("0\n");
			return (0);
		}
		printf("%d\n", change(value));
	}
	return (0);
}
