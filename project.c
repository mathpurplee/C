#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int select = 1;

void menu(void)
{
	printf("[1.���� ���� 2.���� ���� 3.�μ� 0.����] ����? : ");
	scanf("%d", &select);
	if (select == 0)
		exit(0);
	else if (select == 1)
		printf("���� ���⸦ �����մϴ�.\n");
	else if (select == 2)
		printf("���� ������ �����մϴ�.\n");
	else if (select == 3)
		printf("���� �μ⸦ �����մϴ�.\n");
	else
		printf("0-3�� �� �Է��ϼ���.\n");
}

int main(void) {
	while (select != 0)
		menu();
}

