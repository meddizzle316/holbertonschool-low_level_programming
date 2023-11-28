#include "main.h"
#include <fcntl.h>
#include <stddef.h>
int main (void)
{
	int fd;
	char buf[64];
	int rd;

	fd = open("/proc/sys/kernel/pid_max", O_RDONLY);
	if (fd == -1) 
	{
		printf("Could not open file\n");
		return (-1);
	}
	rd = read(fd, buf, 64);
	if (rd == -1)
	{
		printf("Could not read file\n");
		close(fd);
		return (-1);
	}
	printf("%s", buf);
	printf("%d\n", fd);
	close(fd);
	return (0);
}
