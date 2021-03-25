#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	double x = 0;

	printf("½Ç¼ö? : ");
	scanf("%lf", &x);

	printf("Á¦°ö : %e\n", pow(x, 2));
	printf("¼¼Á¦°ö : %e\n", pow(x, 3));

	return 0;
}
