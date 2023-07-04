#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(void)
{
	pid_t pid;
	pid = fork();
	char *env[]={"a=90",NULL};
	if (pid == 0) 
	{
		char *argv[]={"ls","-l",NULL};
		printf("Child Process\n");
		execvp("ls",argv);	
		printf("this wont print\n");
    	}
	else
		printf("Parent Process\n");
}

