#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10
int i;

void make_sequence(int* arr, int size, int value);

int main(void) {
    int arr[SIZE] = { 0 };
    int diff;
    printf("�迭 arr�� �ּ� = %d, arr[0] = %d\n", arr, arr[0]);

    printf("ù ��° ��? ");
    scanf("%d", &arr[0]);
    printf("����? ");
    scanf("%d", &diff);

    make_sequence(arr, SIZE, diff);

    printf("<��������>\n");
    for (i = 0; i < SIZE; i++) {
        printf("�迭 arr[%d]�� �ּ� = %d, data = %2d\n", i, &arr[i], arr[i]);
    }
    printf("\n");
}

void make_sequence(int* arr, int size, int value)
{
    printf("������ arr�� �ּ� = %d, data = %d\n", &arr, arr);
    for (i = 1; i < size; i++)
        arr[i] = arr[i - 1] + value;         
}