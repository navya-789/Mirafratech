#include"header.h"
extern int stock;
void sale()
{
	int item;
	printf("Enter number of items for selling:\n");
	scanf("%d",&item);
	if(stock>=item)
	{
		substock(item);
		printf("Available stock:%d\n",stock);
	}
	else
		printf("Sorry,stock is not available:\n");
}

