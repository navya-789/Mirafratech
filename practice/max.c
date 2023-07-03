/*Max & Min element in an array*/
#include<stdio.h>
int main()
{
	int arr[5]={1,4,2,5,0};
	int i=0,min=0,max=0;
	min=arr[0];
	max=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]>max)
			max = arr[i];
		else if(arr[i]<min)
			min = arr[i];

	}
	printf("min = %d \t max = %d\n",min,max);

}
