#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double kwh = 0;
	double rate;

	printf("�⺻ ���? : ");
	scanf("%lf", &rate);
	printf("�� ��뷮(kwh)? : ");
	scanf("%lf", &kwh);
	kwh *= 190;
	rate += kwh;
	printf("���� ��� : %.lf��", rate);
	return 0;


}
