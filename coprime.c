#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int id;
	int coprime;
	struct student *next;
}student;

student *createnode();
void printll(student *p);
student * insert_node(student *t,int p);
int prime(int);
int main()
{
	student *H=NULL,*n=NULL,*L=NULL;  //here must assign null otherwise it getting garabage value
	char ch;
	int a,b,i,c;
	printf("enter limits\n");
	scanf("%d\n%d",&a,&b);
	if(a<b)
	{
	for(i=a;i<=b;i++)
	{
	c=prime(i);
		if(c==1)
		{
			n=createnode(i);
			if(!H)
			{
				H=n;
				H->coprime=0;
			}
			else
			{
				L->next=n;
				if((i - L->id)==2)
					n->coprime=L->id;
				else 
					n->coprime=0;
			}
			L=n;
		}
	}
	}
	printll(H);
}

student *createnode(int a)
{
	student *new = (student *)malloc(sizeof(student));
	new->id=a;
	new->coprime=a;
	new->next = NULL;
	return new;
}
void printll(student *p)
{
	while(p)
	{
		printf("%d \t",p->id);
		printf("%d\n",p->coprime);
		p=p->next;
	}
}
int prime(int a)
{
	int j;
			for(j=2;j<=a/2;j++)
			{
				if(a%j==0)
				{
					return 0;
				}
			}
	return 1;
}
