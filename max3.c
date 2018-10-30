#include <stdio.h>

int main(int argc, char **argv)
{
    /* 初始化 */
    double a;
    double b;
    double c;
    double max;
    /* 提示 */
    printf("请输入三个数字：");
    /* 获取输入 */
    scanf("%lf %lf %lf",&a,&b,&c);
    /* 判断 */
    if ( a > b ) {
        if ( a > c ) {
            max = a;
        } else {
            max = c;
        }
    } else {
        if ( b > c ) {
            max = b;
        } else {
            max = c;
        }
    }
    /* 输出 */
    printf("较大的是%f\n",max);
    return 0;
}
