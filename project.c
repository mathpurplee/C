#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int month;

	printf("�� ��? : ");
	scanf("%d", &month);

	month > 0 && month < 13 ? printf("%d�� �Դϴ�.", month) : printf("�߸��� ���Դϴ�.");
	return 0;
}
