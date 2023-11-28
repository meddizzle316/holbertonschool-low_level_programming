#include "main.h"
int main(int argc, char **argv)
{	
	int i;

	if (argv == NULL) return (-1);
	for (i = 0; argv[i]; i++)
	{
		printf("%s\n", argv[i]); 
	}
	return (0);
}
