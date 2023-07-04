//pid for child and parent is different
//each fork create two process if we run 3 forks we craete 8 process

#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
fork();
fork();
fork();
fork();
printf("pid=%u\n",getpid());
}
