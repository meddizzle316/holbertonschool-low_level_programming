#include "main.h"
#include <string.h>
/**
 * append_text_to_file - addes text to the end of a file
 * @filename: name of file to be added to
 * @text_content: text to add to file
 * Return: 1 if success -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, len;

	fd = i = len = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		fd = open(filename, O_RDWR | O_APPEND);
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
	fd = open(filename, O_WRONLY);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
