#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double kwh = 0;
	double rate;

	printf("기본 요금? : ");
	scanf("%lf", &rate);
	printf("월 사용량(kwh)? : ");
	scanf("%lf", &kwh);
	kwh *= 190;
	rate += kwh;
	printf("전기 요금 : %.lf원", rate);
	return 0;


}
