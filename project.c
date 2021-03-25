#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int mae = 0;
	int jill = 0;
	double nong = 100;


	printf("용매? : ");
	scanf("%d", &mae);
	printf("용질? : ");
	scanf("%d", &jill);

	nong *= (double)jill / (mae + jill); // 피연산자 중 하나를 double로 형변환하면 몫을 실수로 구할 수 있음

	printf("농도 : %.2lf %", nong);
}
