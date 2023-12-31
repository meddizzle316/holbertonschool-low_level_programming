#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content to be written to file
 * Return: 1 if succeeds and -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int i, fd, len;

	i = fd = len = 0;
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 00600);
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
	else
	{
		fd = open(filename, O_CREAT | O_RDWR | O_RDONLY | O_TRUNC);
		if (fd == -1)
		{
			close(fd);
			return (-1);
		}
		return (1);
	}
}
