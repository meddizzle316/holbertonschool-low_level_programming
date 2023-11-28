#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <sys/types.h>
int main (void)
{
	pid_t pid; 
	pid = getpid();
	printf("%d\n", pid);
	return (0);
}
