// C program for insertion sort
#include <math.h>
#include <stdio.h>
void insertionSort(int arr[], int n)
{
	int i, t, j;
	for (i = 1; i < n; i++) 
	{
		t = arr[i];
		for(j=i-1;j>=0&&arr[j]>t;j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = t;
	}
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\n");
}
int main()
{
	int arr[] = { 12, 11, 13, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	insertionSort(arr, n);
	return 0;
}

