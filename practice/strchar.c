/*reverse string print characters in a string*/
#include<string.h>
#include<stdio.h>
int main()
{
	char string[]="kernel masters";
	int p=0,i=0;
	p=strlen(string);
	for(i=0;i<p;i++)
//	while(string[p] != '\0')
	{
		printf("%c ",string[p-1-i]);
//		p++;
	}
	printf("\n");

}
