#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_array(int array[], int size)
{
	printf("�迭 : ");
	for (int i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");
}

int main()
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 12, 37 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	int num = 0;

	print_array(arr, arr_size);

	printf("ã�� ��? : ");
	scanf("%d", &num);

	for (int i = 9; i >= 0; i--) {
		if (arr[i] == num) {
			printf("%d�� %d��° �����Դϴ�.", num, i);
			break;
		}
		else if(arr[i] != num && i<=0)
			printf("�Է��� ���Ҹ� ã�� �� �����ϴ�.");
	}
}


