#include <stdio.h>

int main(int argc, char **argv)
{
    /* ��ʼ�� */
    double a;
    double b;
    /* ��ʾ */
    printf("�������������֣�");
    /* ��ȡ���� */
    scanf("%lf %lf",&a,&b);
    /* �ж� */
    double max = b;
    if (a > b) {
        max = a;
    }
    /* ��� */
    printf("�ϴ����%f\n",max);
    return 0;
}
