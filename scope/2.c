#include<stdio.h>
int sum(static int a,int b)
{
int c=a+b;
return c;
}
int main()
{
int a,b;
printf("enter a,b\n");
scanf("%d\n%d",&a,&b);
int p;
p=sum(a,b);
printf("%d\n",p);
}

