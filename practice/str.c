#include<stdio.h>
int main()
{
char str[6];
printf("enter a charachter\n");
scanf("%s",str);
for(int i=0;str[i]!='\0';i++)
{
if(i==0)
	str[0]='1';
else if(i==1)	
	str[1]='@';
else if(i==2)
	str[2]='+';
else if(i==3)
	str[3]='0';

}
printf("%s\n",str);
}
