#include <stdio.h>
#include <math.h>
int decimal(int);
int main() 
{
	int n, bin;
	printf("Enter a decimal number:\n ");
	scanf("%d", &n);
	bin = decimal(n);
	printf("%d in decimal =  %d in binary\n", n, bin);
	return 0;
}
int decimal(int n) 
{
	int bin = 0;
	int rem, i = 1;
	while (n!=0) 
	{
		rem = n % 2;
		n /= 2;
		bin += rem * i;
		i *= 10;
	}
	return bin;
}
