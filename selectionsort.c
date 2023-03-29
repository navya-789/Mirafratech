#include <stdio.h>
#define MAX 5 
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void selectionSort(int arr[], int n)
{
	int i, j, k;

	for (i = 0; i < n-1; i++)
	{
		k = i;
		for (j = i+1; j < n; j++)
			if (arr[j] < arr[k])
				k = j;
		if(k != i)
			swap(&arr[k], &arr[i]);
	}
}
int main()
{
	int i;
	int arr[MAX];
	printf("enter array elements\n");
	for(i=0;i<MAX;i++)
		scanf("%d",&arr[i]);
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, n);
	printf("Sorted array: \n");
	for (i=0; i < MAX; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
