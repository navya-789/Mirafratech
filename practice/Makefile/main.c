#include"header.h"

extern int stock;

int main()
{
	int j=1;
	while(j==1){


		printf("Enter stock:\n");
		scanf("%d",&stock);
		printf("Enter limit:\n");
		scanf("%d",&limit);
		if(limit>=stock){
			j=0;
		}
		else{
			printf("Enter the stock below limit\n");
			j=1;
		}
	}

	j=1;
	while(j==1)
	{
		int a;
		printf("Enter 1)stock 2)sale 3)purchase 4)quit:\n");
		scanf("%d",&a);
		/*switch(a)
		{
			case 1:printf("The total stock is:%d\n",stock);
			       break;
			case 2:sale();
			       break;
			case 3:purchase();
			       break;
			case 4: j=0;
				break;

		}*/
		if(a==1)
		{
			printf("the total stock is %d\n",stock);
		}
		else if(a==2)
		{
//			int items;
//			printf("enter no:of items requited\n");
//			scanf("%d\n",&items);
			sale();
			printf("the available stock=%d\n",stock);
		}
		else if(a==3)
		{
//			int items;
//			printf("enter no:of items purchase");
//			scanf("%d\n",&items);
			purchase();
			printf("the available stock=%d/n",stock);
		}
		else if(a==4)
		{
			j=0;
		}
	}


}

