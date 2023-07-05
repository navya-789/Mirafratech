#include<stdio.h>
int main()
{
int n=9909210,i=0;
while(n)
{
n=n/10;
i++;
}
printf("%d\n",i);
}
