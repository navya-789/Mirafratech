#include<stdio.h>
unsigned int reversebit(unsigned int n);
int main()
{
	unsigned int n;
	printf("enter a number\n");
	scanf("%d",&n);
	unsigned int p=reversebit(n);
	printf("%d\n",p);
}
unsigned int reversebit(unsigned int n)
{
	int i,j;
	unsigned int p=sizeof(n);
	printf("p=%d\n",p);
	for(i=0,j=p;i<j;i++,j--)
	{
	if((n>>i&0x1)!=(n>>j&0x1))
		{
			n=n^(0x1<<j);
			n=n^(0x1<<i);
		}

	}
	return n;
}
