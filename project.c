#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x = 0, gongcha = 0;
	int arr[10] = { 0 };

	printf("ù ��° ��? : ");
	scanf("%d", &x);
	printf("����? : ");
	scanf("%d", &gongcha);

	printf("�������� : ");
	for (int i = 0; i < 10; i++) {
		arr[i] = x + (i * gongcha);
		printf("%d ", arr[i]);
	}
}