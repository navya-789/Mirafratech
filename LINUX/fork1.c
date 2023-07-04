//we can't deside which process run first either child or parent

#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>
int main()
{
	pid_t pid=-1;
	pid=fork();
	if(pid==0)
	{
		printf("child process\n");
		printf("child process pid ==%u\n",getpid());
		printf("child process ppid=%u\n",getppid());
	}
	else
	{
		printf("parent process\n");
		printf("parent process pid=%u\n",getpid());
		printf("parent process ppid=%u\n",getppid());
	}
}
