#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a given file and prints it
 * @filename: name of file to be read
 * @letters: amount of letters from file to read
 * Return: amount of bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i;
	char *string;
	ssize_t bytesRead;

	bytesRead = i = 0;
	if (filename == NULL || letters <= 0)
	{
		return (0);
	}
	string = malloc(letters);
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
			close(fd);
			return (0);
		}
	}
	if (bytesRead >= 0)
	{
		i = write(STDOUT_FILENO, string, bytesRead);
		if (i == -1)
		{
			close(fd);
			return (0);
		}
	}
	free(string);
	close(fd);
	return (bytesRead);
}
