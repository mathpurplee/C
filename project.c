#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 3
#define COL 5

void memory_map(int* p, int row, int val);

int main()
{
	int arr[ROW][COL] = { 0 };
	int val = 0;
	int row = 0;
	
	printf("�迭�� ���ҿ� ������ ��? : ");
	scanf("%d", &val);
	for (row = 0; row < ROW; row++) {
		memory_map(arr[row], row, val);
		printf("\n");
	}
}

void memory_map(int* p, int row, int val)
{
	printf("������ p�� �ּ� = %d, data = %d\n", &p, p);
	for (int col = 0; col < COL; col++) {
	*(p+col) = val;
		printf("�迭 arr[%d][%d]�� �ּ� = %d, data = %d\n", row, col, &p[col], *(p+col));
	}
}