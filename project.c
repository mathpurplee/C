#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

void print_a(const int* arr1, int size)
{
	printf("포인터 arr1의 주소 = %d, data = %d\n", &arr1, arr1);
	for (int i = 0; i < size; i++) 
		printf("배열 a[%d]의 주소 = %d, data = %d\n", i, &arr1[i], arr1[i]);
}
void print_b(const int* arr2, int size)
{
	printf("포인터 arr2의 주소 = %d, data = %d\n", &arr2, arr2);
	for (int i = 0; i < size; i++)
		printf("배열 b[%d]의 주소 = %d, data = %d\n", i, &arr2[i], arr2[i]);
}
void swap_array(const int *source, int *target, int size);

int main()
{
	int a[SIZE] = { 1,3,5,7,9 };
	int b[SIZE] = { 0,2,4,6,8 };
	print_a(a, SIZE);
	print_b(b, SIZE);
	swap_array(a, b, SIZE);
	printf("swap_array 호출 후\n");
	print_a(a, SIZE);
	print_b(b, SIZE);
}

void swap_array(int *arr1, int *arr2, int size)
{
	int temp[SIZE];
	for (int i = 0; i < size; i++) {
		temp[i] = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp[i];
	}
}