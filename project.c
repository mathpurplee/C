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
	int reserve = 0;          // �Է¹��� ���� �¼� ��
	int be_reserved = 0;    // �̹� ���ŵ� �¼� ��
	int can_reserve = 10;   // ���� ���� ������ �¼� �� 

	while (be_reserved != 10) {
		print_array(seat, 10);
		printf("������ �¼� ��? : ");
		scanf("%d", &reserve);

		if ((be_reserved + reserve) <= 10)
		{
			for (int i = be_reserved; i < be_reserved + reserve; i++)
			{
				seat[i] = 88;
				printf("%d ", i + 1);
			}
			printf("�� �¼��� �����߽��ϴ�.\n");
			be_reserved += reserve;
			can_reserve -= be_reserved;
		}
		else if ((be_reserved + reserve) > 10)
		{
			printf("���� �¼����� %d�̹Ƿ� %d�¼��� ������ �� �����ϴ�.", can_reserve, reserve);
			break;
		}
	}
}
