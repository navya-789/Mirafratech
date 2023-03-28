#include <stdio.h>
int decimal(int);
int power(int,int);
int main() {
	int n;
	printf("Enter a binary number: \t");
	scanf("%d", &n);
	printf("%d in binary = %d in decimal\n", n, decimal(n));
	return 0;
}
int decimal(int n) {
	int dec = 0, i = 0, rem;
	while (n!=0) 
	{
		rem = n % 10;
		n /= 10;
		dec += rem * power(2, i);
		++i;
	}
	return dec;
}
int power(int a,int j)
{
	int i,p=1;
	for(i=0;i<j;i++)
		p=p*2;
	return p;
}
