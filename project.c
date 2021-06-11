#define _CRT_SECURE_NO_WARNINGS
#define MAX_STR 128
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* join_string(const char* s1, const char* s2) {
	int len = 0;
	char* p = NULL;

	if (s1 == NULL || s2 == NULL) // join_string ����
		return NULL;

	printf("������ s1�� �ּ� = %d, data = %d, size = %d\n", &s1, s1, sizeof(s1));
	printf("������ s2�� �ּ� = %d, data = %d, size = %d\n", &s2, s2, sizeof(s2));

	len = strlen(s1) + strlen(s2) + 1;
	p = (char*)malloc(sizeof(char) * len); // �Լ� ���� ������ ���� p�� �����޸� �Ҵ�, p���� �����޸� �ּ� ����

	strcpy(p, s1); // copy
	strcat(p, s2); // connect

	printf("������ p�� �ּ� = %d, data = %d, size = %d\n", &p, p, sizeof(p));
	return p; // (�߿�) char*�� ������ p�� ����Ű�� �����޸� �ּ� ����
}

int main(void)
{
	char s1[MAX_STR] = "";
	char s2[MAX_STR] = "";
	char* s3 = NULL;

	printf("�迭 s1�� �ּ� = %d, data = %d, size = %d\n", s1, s1[0], sizeof(s1));
	printf("�迭 s2�� �ּ� = %d, data = %d, size = %d\n", s2, s2[0], sizeof(s2));
	printf("������ s3�� �ּ� = %d, data = %d, size = %d\n", s2, s2[0], sizeof(s2));

	printf("ù ��° ���ڿ�? ");
	gets(s1);
	printf("�� ��° ���ڿ�? ");
	gets(s2);
	s3 = join_string(s1, s2);
	
	if (s3 != NULL) {
		printf("������ s3�� �ּ� = %d, data = %d, size = %d\n", &s3, s3, sizeof(s3));
		printf("����� ���ڿ� : %s\n", s3);
	}
	free(s3);
	s3 = NULL;
}