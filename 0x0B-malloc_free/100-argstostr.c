#include "main.h"
/**
 * argstostr - cat argument
 * @ac: length
 * @av: argument length
 * Return: pointer to string
 */
char *argstostr(int ac, char **av)
{
	int i, c, e = 0, length = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (c = 0; av[i][c]; c++)
		{
			length++;
		}
	}
	length += ac;
	s = malloc(sizeof(char) * length + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (c = 0; av[i][c]; c++)
		{
			s[e] = av[i][c];
			e++;
		}
		if (s[e] == '\0')
		{
			s[e++] = '\n';
		}
	}
	return (s);
}
