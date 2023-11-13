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
		return (bytesRead);
	}
	string = malloc(letters + 1);
	if (string == NULL)
	{
		free(string);
		return (bytesRead);
	}
	fd = open(filename, O_RDONLY);
	if (fd)
	{
		bytesRead = read(fd, string, letters);
	}
	else
	{
		close(fd);
		return (bytesRead);
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
	close(fd);
	return (bytesRead);
}
