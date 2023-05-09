#include "main.h"

/**
 * create_file - create file
 * @filename: file name
 * @text_content: text content
 * Return: 1
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, size = 0;
	ssize_t nwrite;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		text_content = "";
	}
	while (text_content[size])
		size++;
	nwrite = write(fd, text_content, size);
	if (nwrite == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
