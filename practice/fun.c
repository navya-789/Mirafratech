#include<stdio.h>
//register int add(register int a,int b);
int add(int a,int b);
static int sub(register int a,int b)
{
	return a-b;
}
auto int mul(register int a,int b)
{
	return a*b;
}
int main()
{
	static int a=90,b=8;
	printf("%d\n",add(a,b));
	printf("%d\n",sub(a,b));
	printf("%d\n",mul(a,b));
}

int add(register int a,int b)
{
	return a+b;
}
/*static int mul(static int a,static int b)
{
	return a*b;
}*/

