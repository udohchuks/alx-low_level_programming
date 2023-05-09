#include "main.h"
/**
 * main - Entry point
 * @ac: arg count
 * @av: arg vector
 * Return: 0
 */
int main(int ac, char **av)
{
	int fd1, fd2;
	ssize_t nread, nwrite;
	char buffer[1024];
	char *file1, *file2;


	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	file1 = av[1];
	file2 = av[2];
	fd1 = open(file1, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't open from file %s\n", file1);
		exit(98);
	}
	fd2 = open(file2, O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't open to %s\n", file2);
		exit(99);
	}
	while ((nread = read(fd1, buffer, 1024)) > 0)
	{
		nwrite = write(fd2, buffer, nread);
		if (nwrite == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file2);
			exit(99);
		}
	}
	if (nread == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file1);
		exit(98);
	}

	if (close(fd1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
