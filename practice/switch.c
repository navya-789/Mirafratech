#include<stdio.h>

//register int y=90;
int main()
{
//char x;
int x=90;
//char x[90]="navya";
//x=12.2;
register int y=90;
printf("%d\t",y);
int *p=&x;
switch(*p)
{
case 90:printf("odd\n");
	break;
case 0:printf("even\n");
}
}
/*wecant accaess pointer but accaess pointer variable"*/
/*printtf("switch we cant do float and strings");*/

/* we can perforn all arthemetic operations*/
/*register variable we cant specify in global error=register name not specified for ‘y’*?
