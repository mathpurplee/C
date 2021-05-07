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
	
	printf("배열의 원소에 저장할 값? : ");
	scanf("%d", &val);
	for (row = 0; row < ROW; row++) {
		memory_map(arr[row], row, val);
		printf("\n");
	}
}

void memory_map(int* p, int row, int val)
{
	printf("포인터 p의 주소 = %d, data = %d\n", &p, p);
	for (int col = 0; col < COL; col++) {
	*(p+col) = val;
		printf("배열 arr[%d][%d]의 주소 = %d, data = %d\n", row, col, &p[col], *(p+col));
	}
}