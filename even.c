#include<stdio.h>
int even(int p)
{
	if((p&0x01)==0)
		return 1;
	else
		return 0;
}
int main()
{
	int o;
	printf("enter a number\n");
	scanf("%d",&o);
	int c=even(o);
	if(c==1)
		printf("even\n");
	else
		printf("odd\n");
}
