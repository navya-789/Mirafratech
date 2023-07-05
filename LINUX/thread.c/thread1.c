#include <pthread.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <ctype.h>
#include <fcntl.h>
void *thread_function(void *arg);
void *thread_fun(void *arg);
void *prime(void *arg);
int main() 
{
	int res,p,m;
	pthread_t a_thread,b_thread,c_thread;
	m = pthread_create(&c_thread,NULL, prime,NULL);
	p = pthread_create(&b_thread,NULL, thread_fun,NULL);
	res = pthread_create(&a_thread, NULL, thread_function,NULL);
	m = pthread_join(c_thread,NULL);
	p = pthread_join(b_thread,NULL);
	res = pthread_join(a_thread, NULL);
}
void *thread_function(void *arg) 
{
	int p=0;
	while(p!=9)
	{
		if(p%2==0)
			printf("even =%d\n",p);
		p++;
	}
	pthread_exit("Thank you for the CPU time");
}
void *thread_fun(void *arg)
{
	int p=0;
	while(p!=9)
	{
		if(p%2!=0)
			printf("odd = %d\n",p);
		p++;
	}
	pthread_exit("Thank you for the CUP time");
}
void *prime(void *arg)
{
	int n=0,p=0;
	while(n<20)
	{
		if(p%n!=0)
		{
		printf("%d\n",p);
		}
		p++;
		n++;
	}
	pthread_exit("Thank you for the CPU time");
}
