#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(void)
{
	pid_t pid;
	pid = fork();
	if (pid == 0) 
	{

		printf("Child Process\n");
		execl("/bin/ls","ls","-l",(char *)0);	
		printf("this wont print\n");
    	}
	else
		printf("Parent Process\n");
}

