#include "stdio.h"
int main(int argc, char const *argv[])
{
	int price = 0;
	const int paid = 100;
	printf("�۸� ");
	scanf("%d",&price);
	int change = paid - price;
	printf("���㣺 %d ",change);
	return 0;
}
