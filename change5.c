#include<stdio.h>

int main(int argc, char const *argv[])
{
	/* ��ʼ�� */
	double price = 0,paid = 0;
	/* �������� */
	printf("������۸�");
	scanf("%lf",&price);
	printf("�������Ѹ���");
	scanf("%lf",&paid);
	/* �������� */
	if ( paid >= price )
	{
		printf("���㣺%lf\n",paid - price);
	} else {
		printf("����Ǯ����");
	}
	return 0;
}
