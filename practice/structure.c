struct date{
int d;
int m;
int y;
};
typedef struct student{
	int a;
	char name[90];
	int m[9];
	char *c;
	struct date dob;
	struct date *doj;
}stu;

#include<string.h>
#include<stdio.h>
int main()
{
	stu p;
	stu *s=&p;
	p.a=90;
	s->a=90;
	printf("p.a=%d\ts->a=%d\n",p.a,s->a);
	p.c="navya";
	printf("pointer char=%s\t",p.c);
	strcpy(p.name,"navya");
	strcpy(s->name,"navya");
	//p.name[90]="navya";we cant instalize string we can copy string only.
	//s->name[9]="navya";
	printf("p.a=%s\ts->a=%s\n",p.name,s->name);
	p.dob.d=22;
	p.dob.m=11;
	p.dob.y=2000;
	printf("date=%d-%d-%d\n",p.dob.d,p.dob.m,p.dob.y);
	p.doj->d=22;
	p.doj->m=11;
	p.doj->y=2000;
	printf("date=%d-%d-%d\n",p.doj->d,p.doj->m,p.doj->y);
	s->dob.d=99;
	s->dob.m=9;
	s->dob.y=1000;
	printf("date dob=%d-%d-%d\n",s->dob.d,s->dob.m,s->dob.y);
	s->doj->d=90;
	s->doj->m=90;
	s->doj->y=90;
	printf("date doj=%d-%d-%d\n",s->doj->d,s->doj->m,s->doj->y);
}



