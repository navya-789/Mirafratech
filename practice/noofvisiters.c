/*
2)  In a bank application, read the amount to be deposited as positive number, and amount to withdraw as a negative number and print the total deposited amount  and total withdrawn amount separately at the end of the loop. When amount is entered as 0, the loop must stop.
print number of viseters?
print number of depositers?
printf number of withdrawels?
*/
#include<stdio.h>
int main()
{
	int wa=0,pa=0,p=0,i=0,da=0,pwa=0,c=0,d=0,w=0;
	for(i=0;;i++)
	{
		printf("enter choice\n\t1=deposit amount\n\t2=withdraw amount\n\t0=exit\n");
		scanf("%d",&p);
		if(p==1)
		{
			printf("enter deposit amount\n");
			scanf("%d",&da);
			d++;
			if(da>0)
			{
				pa+=da;
			}
			else
			{
				printf("enter valid amount\n");
				continue;
			}
		}
		else if(p==2)
		{
			printf("enter withdrawel amount -Ve\n");
			scanf("%d",&wa);
			w++;
			int sa=1;
			sa=(-1*wa);
			if(sa>da)
			{
				printf("amount is insufficient please amount with in %d",pa);
			}
			else if(wa<0)
			{
				pwa+=wa;
			
			}
			else
			{
				printf("valid amount\n");
				continue;
			}
		}
		else if(p==0)
			{
			c++;
			break;
			}

	}
	printf("deposit amount=%d\nwithdrawel amount=%d\n",pa,pwa);
	if((pa+pwa)>0)
	printf("amount in bank=%d\n",pa+pwa);
	else
	printf("amount in bank=%d\n",pa+pwa);
	printf("no:of deositers=%d\n",d);
	printf("no:of withwarels=%d\n",c);
	printf("no:of visitors=%d\n",d+c+w);
}
