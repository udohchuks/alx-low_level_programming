#include "main.h"
/**
 * append_text_to_file - appends
 * @filename: filename
 * @text_content
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size = 0;
	ssize_t nwrite;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, 644);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[size] != '\0')
			size++;
		nwrite = write(fd, text_content, size);
		if (nwrite == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
