struct date{
int d;
int m;
int y;
};
typedef struct student{
	struct date dob;
	struct date *doj;
}stu;
#include<string.h>
#include<stdio.h>
int main()
{
	stu p;
	stu *s=&p;
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
