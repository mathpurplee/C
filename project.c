#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARR_SIZE 5


int calculate_discount(int arr[], int index_num, int rate)
{
	int discount_cost = arr[index_num] - (arr[index_num] * ((double)rate / 100));
	return discount_cost;
}

int main()
{
	int discount_rate;                  // ������
	int cost[ARR_SIZE];
	int discount_cost[ARR_SIZE];

	printf("��ǰ�� 5���� �Է��ϼ��� : ");
	scanf("%d %d %d %d %d", &cost[0], &cost[1], &cost[2], &cost[3], &cost[4]);
	printf("������? : ");
	scanf("%d", &discount_rate);

	for (int i = 0; i < ARR_SIZE; i++) {
		discount_cost[i] = calculate_discount(cost, i, discount_rate);
		printf("����: %6d --> ���ΰ�: %6d \n", cost[i], discount_cost[i]);
	}
}
