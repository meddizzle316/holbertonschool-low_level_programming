#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * function name - function description
 * @parameters: description
 * Return: return value
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *string;
	ssize_t bytesRead;
	
	bytesRead = 0;
	if (filename == NULL || letters <= 0)
	{
		return (0);
	}
	string = malloc(letters);
	if (string == NULL)
	{
		free(string);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	if (fd)
	{
		bytesRead = read(fd, string, letters);
		if (bytesRead == -1)
		{
			return (0);
		}
	}
	if (bytesRead == 0)
	{
		close(fd);
		return (bytesRead);
	}
	if (bytesRead >= 0)
	{
		string[bytesRead] = '\0';
		printf("%s", string);
	}
	free(string);
	close(fd);
	return (bytesRead);
}
