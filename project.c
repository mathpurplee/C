#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int interger, i;

	printf("���� ����? : ");
	scanf("%d", &interger);

	for (i = 2; i < interger; i++) {
		if (interger % i == 0)
			break;
	}
	if (i == interger)
		printf("%d�� �Ҽ��Դϴ�.", interger);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.", interger);
	return 0;
}

