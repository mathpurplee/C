#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a1 = 0, common_ratio = 0;
	printf("ù ��° ��? : ");
	scanf("%d", &a1);
	printf("����? : ");
	scanf("%d", &common_ratio);
	printf("������ : ");

	double geometric_sequence[10];
	for (int i = 0; i < 10; i++) {
		geometric_sequence[i] = (double)a1 * pow(common_ratio, i);
		if (i > 7) 
			printf("%.5e ", geometric_sequence[i]);
		else
			printf("%.f ", geometric_sequence[i]);
	}
}
