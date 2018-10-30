#include<stdio.h>

int main(int argc, char const *argv[])
{
	/* 初始化 */
	double price = 0,paid = 0;
	/* 读入数据 */
	printf("请输入价格：");
	scanf("%lf",&price);
	printf("请输入已付金额：");
	scanf("%lf",&paid);
	/* 计算找零 */
	if ( paid >= price )
	{
		printf("找零：%lf\n",paid - price);
	} else {
		printf("您的钱不够");
	}
	return 0;
}
