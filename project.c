#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char phone[] = "010-123-4567";
	char* p = NULL;

	printf("�迭 phone[]�� �ּ� = %d, data = %s\n", phone, phone);  // �迭�� �̸��� �迭�� ���� �ּ� 
	for (int i = 0; i < strlen(phone); i++) 
		printf("phone[%2d]�� �ּ� = %d, data = %c\n", i, &phone[i], phone[i]);
	printf("\n");

	p = strtok(phone, "-"); // ù ��° ��ū p[3] = "-"�� �ּ� ����
	printf("������ ���� p�� �ּ� = %d, data = %d,  NULLȮ�� p[3] = %s\n", &p, p, p[3]);

	p = strtok(NULL, "-"); // �� ��° ��ū p[7] = "-"�� �ּ� ����
	printf("������ ���� p�� �ּ� = %d, data = %d,  NULLȮ�� p[3] = %s\n", &p, p, p[3]);

	p = strtok(NULL, "-"); // �� ��° ��ū p[12]= "-"�� �ּ� ����
	printf("������ ���� p�� �ּ� = %d, data = %d,  NULLȮ�� p[4] = %s\n", &p, p, p[4]);
}