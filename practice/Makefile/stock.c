#include"header.h"
int stock;
int addstock(int item)
{
	stock=stock+item;
	return stock;
}
int substock(int item)
{
	stock=stock-item;
	return stock;
}

