#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a1 = 0, common_ratio = 0;
	printf("첫 번째 항? : ");
	scanf("%d", &a1);
	printf("공비? : ");
	scanf("%d", &common_ratio);
	printf("등비수열 : ");

	double geometric_sequence[10];
	for (int i = 0; i < 10; i++) {
		geometric_sequence[i] = (double)a1 * pow(common_ratio, i);
		if (i > 7) 
			printf("%.5e ", geometric_sequence[i]);
		else
			printf("%.f ", geometric_sequence[i]);
	}
}
