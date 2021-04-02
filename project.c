#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int interger, i, j;
	int count = 0;

	printf("양의 정수? : ");
	scanf("%d", &interger);

	for (i = 2; i < interger; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0)
				break;
		}
		if (i == j) {
			printf("%2d ", i);
			count++;
			if (count % 10 == 0)
				printf("\n");
		}
	}
}

