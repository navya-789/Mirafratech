#include<stdio.h>
static int sum(int a,int b)
{
	int c=a+b;
	return c;
}
int main()
{
	static int a,b;
	printf("enter a,b\n");
	scanf("%d\n%d",&a,&b);
	int p;
	p=sum(a,b);
	printf("%d\n",p);
}

