#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double kwh = 0;
	double hwh = 190;

	printf("�� ��뷮(kwh)? : ");
	scanf("%lf", &kwh);
	double rate = kwh * hwh;
	printf("���� ��� : %.lf��", rate);
	return 0;
}
