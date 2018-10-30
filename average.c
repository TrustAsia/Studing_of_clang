#include<stdio.h>
int main()
{
	printf("请输入两个数字 以空格(或回车)间隔 ");
	double a,b;
	scanf("%lf %lf",&a,&b);
	double c = ( a + b ) / 2;
	printf("%f与%f的平均数为%f",a,b,c);
	return 0;
}
