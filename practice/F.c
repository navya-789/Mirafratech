#include<stdio.h>
int main()
{
int i,j;
for(i=0;i<6;i++)
{
for(j=0;j<5;j++)
{
if(i==0||i==6||i==3||j==0)
printf("#");
else
printf(" ");
}
printf("\n");
}
}
