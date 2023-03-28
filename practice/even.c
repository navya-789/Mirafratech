#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int id;
	struct student *next;
}student;
//int even(int);
student *createnode(int);
student *create_node(int);
void print(student *p);
void printll(student *p);
int main()
{
	student *Head=NULL,*New=NULL,*Last=NULL;  //here must assign null otherwise it getting garabage value
	student *h=NULL,*n=NULL,*l=NULL;
	char ch;
	int a,b,i;
	printf("enter limits\n");
	scanf("%d\n%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i%2==1)	
		{
			New=createnode(i);
			if(!Head)
				Head=New;
			else
			{
				Last->next=New;
			}
			Last=New;
		}
		else 
		{
			n=create_node(i);
			if(!h)
				h=n;
			else
			{
				l->next=n;
			}
			l=n;
		}
	}
	int p=0;
	print(Head);
	printll(h);
}
student *createnode(int a)
{
	student *new = (student *)malloc(sizeof(student));
	new->id=a;
	new->next = NULL;
	return new;
}
student *create_node(int a)
{
	student *p=(student*)malloc(sizeof(student));
	p->id=a;
	p->next=NULL;
	return p;
}
void printll(student *p)
{
printf("even numbers\n");
	while(p)
	{
		printf("%d \t",p->id);
		p=p->next;
	}
	printf("\n");
}
void print(student*p)
{
printf("odd numbers\n");
while(p)
	{
	printf("%d\t",p->id);
	p=p->next;
	}
	printf("\n");
}

