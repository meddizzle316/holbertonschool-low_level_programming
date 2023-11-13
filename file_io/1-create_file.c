#include "main.h"
#include <string.h>
/**
 * function name - function description
 * @parameters: description
 * Return: return value
 */
int create_file(const char *filename, char *text_content)
{
	int i, fd, j, len;

	i = fd = j = len = 0;

	len = (strlen(text_content));
	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	i = write(fd, text_content, len);
	if (i == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
