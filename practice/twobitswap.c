#include<stdio.h>
int bineary(int x,int arr[]);
int main()
{
	int x;
	printf("enter anumber\n");
	scanf("%d",&x);
	int y=x;
	int i,arr[90];
	for(i=0;i<16;i++)
	{
		if(((x>>i)&1)!=((x>>i+1)&1))
		{
			x=x^(1<<i);
			x=x^(1<<i+1);
		}
		i=i+1;
	}
	printf("original number=%d\n",y);
	printf("modified number =%d\n",x);
	bineary(y,arr);
	bineary(x,arr);
}

int bineary(int n,int a[])
{
	int i;
	for(i=0;n>0;i++)    
	{    
		a[i]=n%2;    
		n=n/2;    
	}    
	printf("\nBinary of Given Number is=");    
	for(i=i-1;i>=0;i--)    
	{    
		printf("%d",a[i]);    
	}    
	return 0;  
}
