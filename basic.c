#include<stdio.h>
#define CHECK(x,p) x&(0x01<<p)
#define CLEAR(x,p) x&(~(0x01<<p))
#define SET(x,p) x|(0x01<<p)
#define TOGGLE(x,p) x^(0x01<<p)
int main()
{
	int n,p;
	printf("enter a number\n");
	scanf("%d",&n);
	printf("enter bit to check\n");
	scanf("%d",&p);
	if(CHECK)
	{
		
	}
}
#include<stdio.h>
#define SET(x,p) (x|(0x1<<p))
#define CLEAR(x,p) (x&(~(0x1<<p)))
#define TOGGLE(x,p) (x^(0x1<<p))

int main()
{
	int x,p;
	printf("enter the number and position\n");
	scanf("%x%x",&x,&p);
	printf("After Set Hex:%x\n",SET(x,p));
	printf("After Clear Hex:%x\n",CLEAR(x,p));
	printf("After Toggle Hex:%x\n",TOGGLE(x,p));
	return 0;
}

