#include <stdio.h>

int main(int argc, char **argv)
{
    /* 初始化 */
    double a;
    double b;
    /* 提示 */
    printf("请输入两个数字：");
    /* 获取输入 */
    scanf("%lf %lf",&a,&b);
    /* 判断 */
    double max = b;
    if (a > b) {
        max = a;
    }
    /* 输出 */
    printf("较大的是%f\n",max);
    return 0;
}
