#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<sys/wait.h>
int main()
{
pid_t pid;
int ret,status;
char *argv[]={"ls","-l"};
pid = fork();
if (pid == 0)
{
	printf("children\n");
	ret = execve("/bin/ls",argv,NULL);
	if(ret == -1)
	perror("execve fails");
	exit(0);
}
else
{
	printf("parent\n");
	wait(&status);
}
}

