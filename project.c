#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int interger, i;

	printf("양의 정수? : ");
	scanf("%d", &interger);

	for (i = 2; i < interger; i++) {
		if (interger % i == 0)
			break;
	}
	if (i == interger)
		printf("%d는 소수입니다.", interger);
	else
		printf("%d는 소수가 아닙니다.", interger);
	return 0;
}

