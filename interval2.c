#include "stdio.h"
int main(int argc, char const *argv[])
{
	/* 初始化 */
	int hour1,minute1;
	int hour2,minute2;
	/* 获取数据 */
	printf("请输入时间1，以空格间隔：");
	scanf("%d %d",&hour1,&minute1);
	printf("请输入时间2，以空格间隔：");
	scanf("%d %d",&hour2,&minute2);
	/* 计算时差 */
	int deltaH = hour2 - hour1;
	int deltaM = minute2 - minute1;
	/* 判断及输出 */
	if ( deltaM < 0 ) {
		deltaM = 60 + deltaM;
		deltaH--;
	}
	printf("时差为%d小时*%d分钟\n",deltaH,deltaM);
	return 0;
}
