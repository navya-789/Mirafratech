#include<stdio.h>
struct student
{
	int p;
	static int c;
	const char d;
};

int main()
{
	struct student r;
	scanf("%d %d %c",&r.p,&r.c,&r.d);
	printf("%d %d %c\n",r.p,r.c,r.d);
}
