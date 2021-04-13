#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_array(int array[], int size)
{
	printf("배열 : ");
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

	printf("찾을 값? : ");
	scanf("%d", &num);

	for (int i = 9; i >= 0; i--) {
		if (arr[i] == num) {
			printf("%d는 %d번째 원소입니다.", num, i);
			break;
		}
		else if(arr[i] != num && i<=0)
			printf("입력한 원소를 찾을 수 없습니다.");
	}
}


