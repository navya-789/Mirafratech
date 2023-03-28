#include<stdio.h> 
#include<string.h> 
int stringcmp (char s1[], char s2[]); 
int main() 
{ 
	int n,c;
 	printf("Enter the size:\n"); 
	scanf("%d",&n);
 	char s1[n];
 	char s2[n]; 
	printf("Enter the string-1 character:\n"); 	
	scanf("%s",s1); 
	printf("Enter the string -2 character:\n");
 	scanf("%s",s2); 
	c=stringcmp(s1,s2); 	
	printf("%d",c); 
}
 int stringcmp(char s1[],char s2[]) 
{
 	int i; 
	for(i=0;s1[i]!='\0';i++) 
	{
		if(s1[i]>=65||s1[i]<=97)
		{			
			if(s1[i]<s2[i]) 
				return -1; 			
			else if(s1[i]>s2[i]) 
				return 1; 	
		}
	} 
	if(s1[i]==0&&s2[i]==0) 
		return 0; 
	if(s1[i]==0&&s2[i]!=0) 		
		return -1; 
	if(s1[i]!=0&&s2[i]==0) 
		return 1; 
}

