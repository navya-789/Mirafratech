#include<stdio.h>
#include<string.h>
int strchar(char s[],char n);
int main()
{
	char n;
	int i;
	printf("enter n value");
	scanf("%c",&n);
	char s[100]="kernel masters";
//	strchar(s,n,i);
	printf("%d",strchar(s,n));


}
int strchar(char s[],char n)
{
int j,i;	
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==n)
		j=i;
	}
	return j;
}

