#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a );
	int b = a % 10;
	a = a / 10;
	int c = a % 10 , d = a / 10;
	printf("%d",( b * 100 + c * 10 + d ));
	return 0;
}
