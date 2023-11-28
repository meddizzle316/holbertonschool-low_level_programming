#include "main.h"
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

int main ()
{
	int i;
	int status;
	int value;
	pid_t my_pid;
	
	char *args[] = {"/usr/bin/ls", NULL};

	for (i = 0; i < 5; i++)
	{
		my_pid = fork();
		if (my_pid == -1)
		{
			printf("my_pid is -1");
			return (-1);
		}
		else if (my_pid == 0)
		{
			value =	execve(args[0], args, NULL);
			if (value == -1)
			{
				perror("value is -1");
				return (-1);
			}
		}
		else
		{
			wait(&status);
			printf("loop %d is finished\n", i);
		}

	}
	return (0);
}
