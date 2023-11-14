#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include "main.h"
/**
 * main - copies the content of one file to another file
 *
 * Return: 0 if success
 */
int main (int argc, char **argv)
{
	int fd_from, fd_to, bytes_read, bytes_writ, close_from, close_to;
	char buffer[1024];

	if (argc < 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[2], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	fd_to = open(argv[3], O_TRUNC | O_CREAT, 00664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[3]);
		exit(99);
	}
	bytes_read = 0;
	bytes_read = read(fd_from, buffer, 1024);
	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	bytes_writ = write(fd_to, buffer, 1024);
	if (bytes_writ == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[3]);
		exit(99);
	}
	close_from = close(fd_from);
	if (close_from == -1)
	{
		dprintf(2, "Error: Can't close fd %s\n", argv[2]);
		exit(100);
	}
	close_to = close(fd_to);
	if (close_to == -1)
	{
		dprintf(2, "Error: Can't close fd %s\n", argv[3]);
		exit(100);
	}
	return (0);
}
