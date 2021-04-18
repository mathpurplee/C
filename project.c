#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int i;

void print_arr(double arr[], int size)
{
	for (i = 0; i < size; i++)
		printf("%.1f ", arr[i]);
	printf("\n");
}

int main()
{
	double arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
	double adverse_arr[10] = { 0 };

	for (i = 0; i < 10; i++) {
		adverse_arr[i] = arr[9 - i];
	}

	printf("배열 : ");
	print_arr(arr, 10);
	printf("역순 : ");
	print_arr(adverse_arr, 10);
}


