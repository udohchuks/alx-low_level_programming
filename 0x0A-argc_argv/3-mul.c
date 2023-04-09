#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: arg vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i, value;
	unsigned int prod;

	if (argc > 1)
	{
		prod = 1;
		for (i = 1; i < argc; i++)
		{
			value = atoi(argv[i]);
			prod *= value;
		}
		printf("%d\n", prod);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
