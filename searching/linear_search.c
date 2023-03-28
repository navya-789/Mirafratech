#include<stdio.h>
#define MAX 10
int bineary_search(int arr[],int key)
{
	int i;
	if(arr[MAX]==0)
		return 0;
	else
	{
	for(i=0;i<MAX;i++)
	{
		if(arr[i]==key)
			return i;

	}
	}
		return 0;

}
int main()
{
	int arr[MAX];
//	int arr[MAX]={10,12,34,18,14,56,78,43,12,90};
	int key=18;
	int p=bineary_search(arr,key);
	if(p)
	{
		printf("%d is found at arr[%d]\n",key,p+1);
	}
	else if(MAX==0)
	{ 

		printf("array is empty\n");
	}
	else
		printf("%d is not found\n",key);
}
