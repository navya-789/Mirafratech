/*2.string copy.

	s=navya.
	d=kavya.
	o/p=s=navya.
	     d=navya.*/
#include<stdio.h>
//#include<string.h>
/*int main()
  {
  char s[100]="navya";
  char d[90]="sagar";
  printf("%s",strcpy(s,d));
  }*/
void stringcpy(char d[],char s[]);
int main()
{
	char s[100]="kernal";
	char d[100]="masters";
	stringcpy(d,s);
	printf("\n%s\n",d);
	printf("\n%s\n",s);
}
void stringcpy(char d[],char s[])
{
	int i;
	for(i=0;d[i]!=0;i++)
	{
		d[i]=s[i];
	}
	d[i]=0;
}

