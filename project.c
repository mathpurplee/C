#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10
int i;

void make_sequence(int* arr, int size, int value);

int main(void) {
    int arr[SIZE] = { 0 };
    int diff;
    printf("배열 arr의 주소 = %d, arr[0] = %d\n", arr, arr[0]);

    printf("첫 번째 항? ");
    scanf("%d", &arr[0]);
    printf("공차? ");
    scanf("%d", &diff);

    make_sequence(arr, SIZE, diff);

    printf("<등차수열>\n");
    for (i = 0; i < SIZE; i++) {
        printf("배열 arr[%d]의 주소 = %d, data = %2d\n", i, &arr[i], arr[i]);
    }
    printf("\n");
}

void make_sequence(int* arr, int size, int value)
{
    printf("포인터 arr의 주소 = %d, data = %d\n", &arr, arr);
    for (i = 1; i < size; i++)
        arr[i] = arr[i - 1] + value;         
}