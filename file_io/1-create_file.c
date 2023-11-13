#include "main.h"
/**
 * function name - function description
 * @parameters: description
 * Return: return value
 */
int create_file(const char *filename, char *text_content)
{
	int i, fd, j;

	i = fd = j = 0;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	i = write(fd, text_content, sizeof text_content);
	if (i == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
