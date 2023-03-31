#include<stdio.h>
void swap(int x,int y)
{
	x=x^y;
	y=x^y;
	x=x^y;
	printf("x=%d\ty=%d\n",x,y);
}
int main()
{
	int x,y;
	printf("enter two numbers\n");
	scanf("%d\n%d",&x,&y);
	printf("before swap\n");
	printf("x=%d\ty=%d\n",x,y);
	printf("after swap\n");
	swap(x,y);
}
