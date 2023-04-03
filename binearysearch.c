#include<stdio.h>

int binearysearch(int low,int high,int n,int a[],int);
int main()
{
	int i,j,high,low,n;
	printf("enter size\n");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter key to search\n");
	int key=0;
	scanf("%d",&key);
	low=0;
	high=n-1;
	//mid=(high+low)/2;
	int c=binearysearch(low,high,n,a,key);
	if(c>=0)
		printf("%d is found at %d position a[%d]\n",key,c,c);
	else
		printf("%d is not found\n",key);
}
int binearysearch(int low,int high,int n,int a[],int key)
{
	int mid;
	mid=(high+low)/2;
	while(high>=low)
	{
		mid=(high+low)/2;
		if(key==a[mid])
			break;
		else{
			if(key>a[mid])
				low=mid+1;
			else
				high=mid-1;
		}
	}
	if(key==a[mid])
		return mid+1;
	else
		return -1;
}
