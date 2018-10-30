#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("请输入两个整数 以空格隔开:");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d + %d = %d \n",a,b,a+b);
    return 0;
}
