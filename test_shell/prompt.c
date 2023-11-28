#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	char *buffer;
	size_t buff_size;
	int line;

	buff_size = 32;
	buffer = (char *)malloc(sizeof(char) * buff_size);
	if (buffer == NULL) 
	{
		printf("buffer is -1");
		free(buffer);
		return (-1);
	}
	while (1)
	{
		printf("$ ");
		line = getline(&buffer, &buff_size, stdin);
		if (line == -1) 
		{
			printf("line is -1");
			free(buffer);
			return (-1); 
		}
		printf("%s", buffer);
	}
	return (0);
}
