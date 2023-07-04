#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
int main(void)
{
	pid_t pid;
	pid = fork();
	if (pid == 0) 
	{
		execlp("ls","ls","-l", NULL);
		execlp("gcc","gcc","execlp.c","-o","execlp","-lm",NULL);
		execlp("rm","rm","./a.out",NULL);
		perror("execlp");
		return 1;
	}
	else if(pid>0) 
	{
		wait(NULL);
		printf("Parent Process\n");
	}
	else
	{
		printf("not created");
		return 1;
	}
	return 0;
}

