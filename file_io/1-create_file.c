#include "main.h"
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>
/**
 * function name - function description
 * @parameters: description
 * Return: return value
 */
int create_file(const char *filename, char *text_content)
{
	int i, fd, j, len;

	i = fd = j = len = 0;
	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	len = strlen(text_content);
	fd = open(filename, O_CREAT | O_RDWR | O_RDONLY | O_TRUNC);
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