#include "stdio.h"
int main(int argc, char const *argv[])
{
	/* ��ʼ�� */
	int hour1,minute1;
	int hour2,minute2;
	/* ��ȡ���� */
	printf("������ʱ��1���Կո�����");
	scanf("%d %d",&hour1,&minute1);
	printf("������ʱ��2���Կո�����");
	scanf("%d %d",&hour2,&minute2);
	/* ����ʱ�� */
	int deltaH = hour2 - hour1;
	int deltaM = minute2 - minute1;
	/* �жϼ���� */
	if ( deltaM < 0 ) {
		deltaM = 60 + deltaM;
		deltaH--;
	}
	printf("ʱ��Ϊ%dСʱ*%d����\n",deltaH,deltaM);
	return 0;
}
