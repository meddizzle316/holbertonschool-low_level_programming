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

	string = malloc(letters + 1);
	if (string == NULL)
	{
		free(string);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	bytesRead = 0;
	if (fd)
	{
		bytesRead = read(fd, string, letters);
	}
	if (bytesRead == 0)
	{
		return (0);
	}
	if (bytesRead >= 0)
	{
		string[bytesRead] = '\0';
		printf("%s", string);
	}
	close(fd);
	return (bytesRead);
}
