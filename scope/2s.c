#include<stdio.h>
static struct student
{
	int p;
	int c;
	char d;
};

int main()
{
	static struct student r;
	scanf("%d %d %c",&r.p,&r.c,&r.d);
	printf("%d %d %c\n",r.p,r.c,r.d);
}
