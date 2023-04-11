#include "main.h"
/**
 * alloc_grid - 2d array
 * @width: columns
 * @height: rows
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int i, j;

	int **p = (int **)malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
		if (p[i] == NULL)
		{
			while (i >= 0)
			{
				free(p[i--]);
			}
			free(p);
			return (NULL);
		}
	}
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
