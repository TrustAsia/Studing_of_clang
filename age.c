#include<stdio.h>

int main()
{
	/* ��ʼ������ */
	const int MINOR = 35;
	int age;
	/* ��ʾ */
	printf("�������������䣺");
	/* ��ȡ���� */
	scanf("%d",&age);
	/* ���#1 */ 
	printf("��������Ϊ��%d\n",age);
	/* �ж� */
	if ( age < MINOR ) {
		printf("���������õģ�");
	}
	/* ���#2 */ 
	printf("�����������ľ������磬�ú���ϧ�ɡ�\n");
	/* ���� */
	return 0;
}
