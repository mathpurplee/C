#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double mass = 0;
	double volume = 0;

	printf("질량(g)? : ");
	scanf("%lf", &mass);
	printf("부피? : ");
	scanf("%lf", &volume);
	double density = mass / volume;
	printf("밀도 : %lf", density);
}
