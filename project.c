#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double kwh = 0;
	double hwh = 190;

	printf("월 사용량(kwh)? : ");
	scanf("%lf", &kwh);
	double rate = kwh * hwh;
	printf("전기 요금 : %.lf원", rate);
	return 0;
}
