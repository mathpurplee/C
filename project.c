#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double fc = 0;
	double cc = 0;

	printf("ȭ�� �µ�? : ");
	scanf("%lf", &fc);
	cc = (fc - 32) * (5.0 / 9.0);

	printf("%.lf F = %.2lf", fc, cc);
	return 0;
}
