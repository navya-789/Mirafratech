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

		printf("Child Process\n");
		execle("/bin/ls","ls","-l",(char *)0,env);	
		printf("this wont print\n");
    	}
	else
		printf("Parent Process\n");
}

