#include<stdio.h>
#include<string.h>
void stringncat(char d[],char s[],int n)
{
	int i,j;
	
	for(i=0;s[i]!=0;i++);
	
	for(j=0;j<n;j++)
	{
		s[i++]=d[j];
	}

}
int main()
{
	int n;
	printf("Enter n value:\n");
	scanf("%d",&n);

	char d[25]="kernal";
	char s[25]="masters";
	
	stringncat(d,s,n);

	printf("%s \n",s);

}

