#include<stdio.h>
void cpyarr(int arr[],int arrk[],int k,int p)
{
int i,j;
if(k==p)
{
for(i=0,j=0;i<k,j<p;i++,j++)
{
arrk[j]=arr[i];
}
}
for(int l=0;l<k;l++)
printf("%d",arrk[l]);
}
int main()
{
int i;
int arr[5],arrk[5];
printf("enter elements\n");
for(i=0;i<5;i++)
scanf("%d",&arr[i]);
int y=sizeof(arr)/sizeof(arr[0]);
int p=sizeof(arrk)/sizeof(arrk[0]);
cpyarr(arr,arrk,y,p);
}
