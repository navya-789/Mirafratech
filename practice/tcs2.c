/*A parking lot in a mall has RxC number of parking spaces. Each parking space will either be  empty(0) or full(1). The status (0/1) of a parking space is represented as the element of the matrix. The task is to find index of the prpeinzta row(R) in the parking lot that has the most of the parking spaces full(1).

Note :
RxC- Size of the matrix
Elements of the matrix M should be only 0 or 1.

Example 1:
Input :
3   -> Value of R(row)
3    -> value of C(column)
[0 1 0 1 1 0 1 1 1] -> Elements of the array M[R][C] where each element is separated by new line.
Output :
3  -> Row 3 has maximum number of 1’s

Example 2:
input :
4 -> Value of R(row)
3 -> Value of C(column)
[0 1 0 1 1 0 1 0 1 1 1 1] -> Elements of the array M[R][C]
Output :
4  -> Row 4 has maximum number of 1’s*/
#include<stdio.h>
int main()
{
	int i,j,m,n,d=0,c=0,p=0;
	printf("enter m,n\n");
	scanf("%d%d",&m,&n);
	int arr[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&arr[i][j]);
	}
	printf("array is\n");
	for(i=0;i<m;i++)
	{
		c=0;
		for(j=0;j<n;j++)
		{
		        if(arr[i][j]==1)
			{
				c++;
				if(c>d)
				{
					d=c;
					p=i;
				}
			}
		}
	}
	printf("the %d row has max number of 1's\n",p+1);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d",arr[i][j]);
		printf("\n");
	}
}
