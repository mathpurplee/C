#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float kg = 0;
	float ms = 0;
	float energy = 0;

	printf("질량(kg)? : ");
	scanf("%f", &kg);
	printf("속력(m/s)? : ");
	scanf("%f", &ms);
	
	ms = pow(ms,2); // 또는 ms *= ms
	energy = (1.0 / 2.0) * kg * ms;

	printf("운동에너지 : %.2f J", energy);
	return 0;
}
