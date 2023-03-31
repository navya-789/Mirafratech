#include<stdio.h>
int sign(signed int p)
{
//for(i=0;i<32;i++)
if((p>>31)&1)
	return 1;
else 
	return 0;
}
int main()
{
signed int p;
printf("enter a number\n");
scanf("%d",&p);
int c=sign(p);
if(c==0)
	printf("+ve %d is positive\n",p);
else
	printf("-ve %d is negative\n",p);
}
