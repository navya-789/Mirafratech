#include<stdio.h>
int main()
{
int i,j;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
if(i==1||((j==0||j==1)&&i==0)||i==3||j==5||(i==4&&(j==4||j==5)))
printf("#");
else
printf(" ");
}
printf("\n");
}
}
