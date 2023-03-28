#include<stdio.h>
//#include<string.h>
/*void strcat(char str1[],char str2[]);
  int main()
  {
  char str1[100]="navya";
  char str2[100]="reddy";
//strcon(str1,str2);
printf("%s%s",str1,str2);
}*/
void strcon(char s1[],char s2[]);
int main()
{
	char s1[100]="km";
	char s2[100]="mt01esd08";
	strcon(s1,s2);
	printf("%s%s",s1,s2);
}
void strcon(char s1[],char s2[])
{

	int i=0,j;
	while(s2[i]==0)
	{	
		for(i=0;s1[i]!=0;i++);
		for(j=0;s2[j]!=0;j++)
		{
			s1[i]=s2[j];
		}
	}
}

