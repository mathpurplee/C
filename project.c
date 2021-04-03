#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = 0;
	int count = 0;
	double sum = 0;

	printf("정수 입력 : ");
	scanf("%d", &num);

	for (int i = 0; i <= num; i++) {
		if (i % 2 == 1) {
			sum += i;
			count++;
		}
	}

	printf("홀수의 합 : %.lf\n", sum);
	printf("평균 : %.lf\n", sum / count);
}

