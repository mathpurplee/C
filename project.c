#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float pi1 = 3.14159265;
	double pi2 = 3.14159265;

	printf("pi = %.2f\n", pi1);
	printf("pi = %.4f\n", pi1);
	printf("pi = %.6f\n", pi1);  // float 유효자릿수 7
	printf("pi = %.8f\n", pi2);  // double 유효자릿수 16
	printf("pi = %e\n", pi2);
	return 0;

}