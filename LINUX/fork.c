//creating fork
#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>
int main()
{
pid_t pid =-1;
pid =fork();
if(pid==0)
printf("child process is created\n");
else
printf("parent process is created\n");
}
