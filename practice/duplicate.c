#include <stdio.h>
void subarrays(int arr[], int n, int sum) 
{
	for (int i = 0; i < n; i++) 
	{
		int p = 0;
		for (int j = i; j < n; j++) 
		{
			p+= arr[j];
			if (p==sum)
			{
				printf("{ ");
				for (int k = i; k <= j; k++)
				{
					printf("%d  ", arr[k]);
				}
				printf("}\n");
			}
		}
	}
}
#include <stdio.h>
int main()
{
	int i,j,n;
	printf("enter size\t");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//int arr[] = {5, 6, -5, 5, 3, 5, 3, -2, 0};
	//int size = sizeof(arr) / sizeof(arr[0]);
	int sum = 8;
	printf("Subarrays with sum 8:\n");
	subarrays(arr, n, sum);
	return 0;
}
