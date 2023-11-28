#include "main.h"
int main (int argc, char** argv)
{
	char* token;
	int i;

	for (i = 0; i < argc; i++)
	{
		token = strtok(argv[i], " ");
		while (token != NULL)
		{
			printf("%s\n", token);
			token = strtok(NULL, " ");
		}
	}
	return (0);
}
