#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float kg = 0;
	float ms = 0;
	float energy = 0;

	printf("����(kg)? : ");
	scanf("%f", &kg);
	printf("�ӷ�(m/s)? : ");
	scanf("%f", &ms);
	
	ms = pow(ms,2); // �Ǵ� ms *= ms
	energy = (1.0 / 2.0) * kg * ms;

	printf("������� : %.2f J", energy);
	return 0;
}
