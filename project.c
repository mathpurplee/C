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

	printf("배열의 원소에 저장할 값? : ");
	scanf("%d", &num);
	save_arr(data, 20, num);
}
