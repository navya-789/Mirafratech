#include<stdio.h>
int main()
{
	int p,q,n;
	scanf("%x",&n);
//	p=(n>>2)&3;
//	q=(n>>6)&3;
	int x=(n>>2)&3^(n>>6)&3;
	x=(x<<2)|(x<<6);
	int res=n^x;
	printf("%x\n",res);
}
