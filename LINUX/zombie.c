#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) 
{
	pid_t pid;
	pid = fork();
	if (pid == 0) 
	{
		printf("I am a child process\n");
		printf("Child process ID: %d\n", getpid());
		printf("Child's parent process ID: %d\n", getppid());
		exit(0);
	} 
	else if (pid > 0) 
	{
		int status;
		getchar();
		wait(&status);
		getchar();
		printf("I am a parent process\n");
		printf("Parent process ID: %d\n", getpid());
		printf("Parent process exiting\n");
	} 
	else
	{
		printf("Failed to create child\n");
		return 1;
	}
	return 0;
}



