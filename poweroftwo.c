#include<stdio.h>
int even(int p)
{
	if((p&(p-1))==0)
		return 1;
	else 
		return 0;
}
int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	int c=even(n);
	if(c==1)
		printf("power of two\n");
	else
		printf("not power of two\n");
}
