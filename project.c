#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_max(int arr[], int size)
{
	int max = 0;  // �ִ밪�� ������ ����
	for (int i = 0; i < size; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}

int find_min(int arr[], int size)
{
	int min = arr[0];   // �ּҰ��� ������ ����
	for (int i = 0; i < size; i++) {
		if (min >= arr[i])
			min = arr[i];
	}
	return min;
}

int main()
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	printf("�迭 : ");
	for (int i = 0; i < 10; i++) {   // �迭 ���
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("�ִ밪 : %d\n", find_max(arr, 10));
	printf("�ּҰ� : %d\n", find_min(arr, 10));


}