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
	int i,j,t;
	printf("the array is\n");
	for(i=0;i<MAX;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	for(i=0;i<MAX;i++)
	{
		//printf("i=arr[%d]=%d\t",i,arr[i]);
		//printf("\n");
		for(j=0;j<=(MAX)-(i+1);j++)
		{
			//printf("j=arr[%d]=%d\n",j,arr[j]);
			//printf("\n");
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
				//	printf("j=%d\t",j);
				//	printf("arr[%d]=%d\t",j,arr[j]);
			}
			//	printf("\ni=%d\t",i);
			//	printf("arr[%d]=%d\t",i,arr[i]);
		}
	}
	printf("\n");
	for(i=0;i<MAX;i++)
		printf("%d\t",arr[i]);
	printf("\n");
}
int main()
{
	int arr[MAX];
	printf("enter an array of size -%d",MAX);
	for(int i=0;i<MAX;i++)
		scanf("%d",&arr[i]);
	bubblesort(arr);
}
