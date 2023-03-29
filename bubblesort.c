#include<stdio.h>
#define MAX 5
void swap(int *arr,int *arr1)
{
			int t;
				t=*arr;
				*arr=*arr1;
				*arr1=t;
}
void bubblesort(int arr[])
{
	int i,j,t,flag=0,p=0,c=0;
	printf("the array is\n");
	for(i=0;i<MAX;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	for(i=0;i<MAX;i++)
	{
		c++;
		for(j=0;j<=(MAX)-(i+1);j++)
		{
			
			if(arr[j]>arr[j+1])
			{
			swap(&arr[j],&arr[j+1]);
		flag=0;
			}
			p++;
		}
		if(flag==0)
			break;
	}
	printf("\n");
	for(i=0;i<MAX;i++)
		printf("%d\t",arr[i]);
	printf("\n");
	printf("i=%d\t",c);
	printf("j=%d\n",p);
}
int main()
{
	int arr[MAX];
	printf("enter an array of size -%d",MAX);
	for(int i=0;i<MAX;i++)
		scanf("%d",&arr[i]);
	bubblesort(arr);
}
