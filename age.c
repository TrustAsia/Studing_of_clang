#include<stdio.h>

int main()
{
	/* 初始化变量 */
	const int MINOR = 35;
	int age;
	/* 提示 */
	printf("请输入您的年龄：");
	/* 获取输入 */
	scanf("%d",&age);
	/* 输出#1 */ 
	printf("您的年龄为：%d\n",age);
	/* 判断 */
	if ( age < MINOR ) {
		printf("年轻是美好的，");
	}
	/* 输出#2 */ 
	printf("年龄决定了你的精神世界，好好珍惜吧。\n");
	/* 返回 */
	return 0;
}
