#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = 0;
	int count = 0;
	double sum = 0;

	printf("���� �Է� : ");
	scanf("%d", &num);

	for (int i = 0; i <= num; i++) {
		if (i % 2 == 1) {
			sum += i;
			count++;
		}
	}

	printf("Ȧ���� �� : %.lf\n", sum);
	printf("��� : %.lf\n", sum / count);
}

