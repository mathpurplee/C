#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x = 0, gongcha = 0;
	int arr[10] = { 0 };

	printf("첫 번째 항? : ");
	scanf("%d", &x);
	printf("공차? : ");
	scanf("%d", &gongcha);

	printf("등차수열 : ");
	for (int i = 0; i < 10; i++) {
		arr[i] = x + (i * gongcha);
		printf("%d ", arr[i]);
	}
}