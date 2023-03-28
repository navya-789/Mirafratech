#include<stdio.h>
static inline void swap(int *p,int *s)
{
*p=*p+*s;
*s=*p-*s;
*p=*p-*s;
}
int main()
{
int a,b;
scanf("%d\n%d",&a,&b);

swap(&a,&b);
printf("%d\t%d\n",a,b);
}
