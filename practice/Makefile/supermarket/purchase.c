#include"header.h"
extern int stock;
void purchase()
{
	int item,l;
	printf("Enter number of items:\n");
	scanf("%d",&item);
	l=limit-stock;

	if(l>=item)
	{
		addstock(item);
		printf("Available stock is:%d\n",stock);
	}
	else
		printf("Sorry,Place  is not available:\n");
}

