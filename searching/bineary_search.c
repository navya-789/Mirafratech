#include <stdio.h>
#define MAX 10
int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r)
	{
		int m = l + (r-l)/2;
		if (arr[m] == x)
			return m;
		else if (arr[m] < x)
			l = m + 1;
		else
			r = m - 1;
	}
	return -1;
}
int main(void)
{
	int arr[] = {2, 3, 4, 10, 40,90,70,60,30};
//	printf("size of array=%ld\n",sizeof(arr));
//	int n = sizeof(arr)/ sizeof(arr[0]);
	int x = 30;
	int result = binarySearch(arr, 0, MAX, x);
	(result == -1)? printf("Element is not present in array\n")
		: printf("Element is present at index %d\n", result);
	return 0;
}

