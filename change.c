#include "stdio.h"
int main(int argc, char const *argv[])
{
	int price = 0;
	int paid = 0;
	printf("�۸� ");
	scanf("%d",&price);
	printf("��֧���� ");
	scanf("%d",&paid);
	int change = paid - price;
	printf("���㣺 %d ",change);
	return 0;
}
