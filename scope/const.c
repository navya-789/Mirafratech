#include<stdio.h>

//const static int a;//global constant static uninstalized variable
const static int b=10;//global constant static instalized variable
const int m;//global const uninstalized variable
const int n=90;//global const instalized variable
int main()
{
const int x;//local const uninstalized variable
const static int a;//local constant static uninstalized variable
const int y=90;//local const instalized variable
int *p=(int*)&a;
printf("value=%d %d\n",*p,a);
*p=10;
printf("value=%d %d\n",*p,a);
return 0;
}
