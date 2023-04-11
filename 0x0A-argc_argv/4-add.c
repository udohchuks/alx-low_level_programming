#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * length - length
 * @value: value
 * @num: num
 * @i: i
 * Return: i
 */
unsigned long int length(int value, int num, unsigned long int i)
{
	if (value < 10)
	{
		return (i);
	}
	else
	{
		return (length(value, num * 10, i + 1));
	}
}
/**
 * main - entry level
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int add, value;

	add = 0;
	if (argc < 2)
	{
		printf("%d\n", add);
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			value = strtol(argv[i], NULL, 10);
			if (!value)
			{
				printf("Error\n");
				return (1);
			}
			if (strlen(argv[i]) != length(value, 10, 1))
			{
				printf("Error\n");
				return (1);
			}
			add += value;
		}
		printf("%d\n", add);
	}
	return (0);
}
