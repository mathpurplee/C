#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double mass = 0;
	double volume = 0;

	printf("����(g)? : ");
	scanf("%lf", &mass);
	printf("����? : ");
	scanf("%lf", &volume);
	double density = mass / volume;
	printf("�е� : %lf", density);
}
