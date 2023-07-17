#include<stdio.h>
int main() {
	int c = 0;
	char ch,i;

	printf("Enter a character: ");
	scanf("%c", &ch);

	c=0;
	if ((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch<= 'Z'))
	{
		for (i = 'a' ; i <= 'z'; i++) {
			c++;
			if(i==ch)
			{
				break;
			}
		}
		for(i='A';i<='Z';i++)
		{
			c++;
			if(i==ch)
			{
			
				break;
			}
			
		}
		c-=26;
	}
	for(i=0;i<c;i++)
	printf("%c is at position %d in the alphabet\n", ch, i);

	return 0;
}

