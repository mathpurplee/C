#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_array(char arr[], int size)
{
	printf("[");
	for (int i = 0; i < size; i++) {
		printf("%c ", arr[i]);
	}
	printf("]\n");
}

int main()
{
	char seat[10] = "0000000000";
	int reserve = 0;          // 입력받을 예매 좌석 수
	int be_reserved = 0;    // 이미 예매된 좌석 수
	int can_reserve = 10;   // 남은 예매 가능한 좌석 수 

	while (be_reserved != 10) {
		print_array(seat, 10);
		printf("예매할 좌석 수? : ");
		scanf("%d", &reserve);

		if ((be_reserved + reserve) <= 10)
		{
			for (int i = be_reserved; i < be_reserved + reserve; i++)
			{
				seat[i] = 88;
				printf("%d ", i + 1);
			}
			printf("번 좌석을 예매했습니다.\n");
			be_reserved += reserve;
			can_reserve -= be_reserved;
		}
		else if ((be_reserved + reserve) > 10)
		{
			printf("남은 좌석수가 %d이므로 %d좌석을 예매할 수 없습니다.", can_reserve, reserve);
			break;
		}
	}
}
