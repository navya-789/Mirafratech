#include<stdio.h>
static int sum(static int a,static int b)
{
static int c=a+b;
return c;
}
int main()
{
static int a,b;
printf("enter a,b\n");
scanf("%d\n%d",&a,&b);
static int p;
p=sum(a,b);
printf("%d\n",p);
}

