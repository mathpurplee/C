#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void save_arr(int arr[], int arr_size, int key)
{
	for (int i = 0; i < arr_size; i++) {
		arr[i] = key;
		printf("%d ", key);
	}
}

int main()
{
	int num = 0;
	int data[20];

	printf("�迭�� ���ҿ� ������ ��? : ");
	scanf("%d", &num);
	save_arr(data, 20, num);
}
