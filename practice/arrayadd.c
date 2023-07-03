#include<stdio.h>
int addele(int arr[],int n)
{
int i=0,k=0;
for(i=0;i<n;i++)
k+=arr[i];
return k;

}
int main()
{
int arr[5];
printf("enter elements\n");
for(int i=0;i<5;i++)
scanf("%d",&arr[i]);
int p=sizeof(arr)/sizeof(arr[0]);
printf("%d\n",addele(arr,p));
}
