#include <stdio.h>

int main(int argc, char **argv)
{
    /* ��ʼ�� */
    double a;
    double b;
    double c;
    double max;
    /* ��ʾ */
    printf("�������������֣�");
    /* ��ȡ���� */
    scanf("%lf %lf %lf",&a,&b,&c);
    /* �ж� */
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
    /* ��� */
    printf("�ϴ����%f\n",max);
    return 0;
}
