#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	double x = 0;

	printf("�Ǽ�? : ");
	scanf("%lf", &x);

	printf("���� : %e\n", pow(x, 2));
	printf("������ : %e\n", pow(x, 3));

	return 0;
}
