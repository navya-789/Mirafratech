#include<stdio.h>
int main()
{
	int wa=0,pa=0,p=0,i=0,da=0,pwa=0;
	for(i=0;;i++)
	{
		printf("enter choice\n\t1=deposit amount\n\t2=withdraw amount\n\t0=exit\n");
		scanf("%d",&p);
		if(p==1)
		{
			printf("enter deposit amount\n");
			scanf("%d",&da);
			if(da>0)
			{
				pa+=da;
			}
			else
			{
				printf("enter valid amount\n"a);
				continue;
			}
		}
		else if(p==2)
		{
			printf("enter withdrawel amount -Ve\n");
			scanf("%d",&wa);
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
			break;
			}

	}
	printf("deposit amount=%d\nwithdrawel amount=%d\n",pa,pwa);
	if((pa+pwa)>0)
	printf("amount in bank=%d\n",pa+pwa);
	else
	printf("amount in bank=%d\n",pa+pwa);
}
