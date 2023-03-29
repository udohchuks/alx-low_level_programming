#include "main.h"
/**
 * leet - leet converter
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
	char num[] = {'4', '3', '0', '7', '1'};
	char letter[] = {'a', 'e', 'o', 't', 'l'};
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == letter[j] || s[i] == letter[j] - 32)
			{
				s[i] = num[j];
			}
		}
		i++;
	}
	return (s);
}
