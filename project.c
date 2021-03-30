#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int interger = 0;
	int num = 0;

	printf("양의 정수? : ");
	scanf("%d", &interger);
	printf("배수의 개수? : ");
	scanf("%d", &num);

	for (int i = 1; i < num + 1; i++)
		printf("%d ", interger * i);

	return 0;
}
