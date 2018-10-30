#include "stdio.h"
int main(int argc, char const *argv[])
{
	int price = 0;
	int paid = 0;
	printf("价格： ");
	scanf("%d",&price);
	printf("已支付： ");
	scanf("%d",&paid);
	int change = paid - price;
	printf("找零： %d ",change);
	return 0;
}
