#include "main.h"
#include <sys/wait.h>
#include <unistd.h>
int main (void)
{
	char *buffer;
	size_t buff_size;
	int characters;
	char *token;
	char *tokenized_buffer[12]; // could create buffer based on size characters from line 29 but that would require a separate function 

	int i, x;
	int status;
	int value;
	pid_t my_pid;
	char *first_arg;


	buff_size = 32;
	buffer = (char *)malloc(sizeof(char) * buff_size);
	if (buffer == NULL)
	{
		perror("buffer is -1");
		free(buffer);
		return (-1);
	}
	x = 0;
	while (1)
	{
		printf("$ ");
		characters = getline(&buffer, &buff_size, stdin);
		if (characters == -1)
		{
			perror("line is -1\n");
			free(buffer);
			return (-1);
		}
		i = 0;
		printf("The buffer: %s\n", buffer);
		token = strtok(buffer, " ");
		while (token != NULL)
		{
			tokenized_buffer[i] = token;
			printf("%s\n", token);
			token = strtok(NULL, " ");
			i++;
		}
		tokenized_buffer[i] = NULL;
		for (i = 0; tokenized_buffer[i]; i++)
		{
			printf("The value of the tokenized_buffer at %d index is %s\n", i, tokenized_buffer[i]);
		}
		first_arg = tokenized_buffer[0];
		printf("%s\n", first_arg);
		my_pid = fork();
		if (my_pid == -1)
		{
			printf("my_pid is -1\n");
			return (-1);
		}
		else if (my_pid == 0)
		{
			value = execve(first_arg, tokenized_buffer, NULL);
			if (value == -1)
			{
				perror("value is -1\n");
				return (-1);
			}
		}
		else
		{
			wait(&status);
			printf("loop %d is finished\n", x);
		}
		x++;
	}
	return (0);
}
