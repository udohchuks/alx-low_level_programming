#include <stdio.h>
#include <stdlib.h>
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
	if (argc == 1)
	{
		printf("%d\n", add);
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			value = atoi(argv[i]);
			if (!value)
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
