#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[70] = "";
	int NumOfAlpha = 0;

	for (int i = 0; i < 70; i++)       //     ���ڿ� �Է� �� memory ���
		printf("str[%2d]�� �ּ� = %d, data = %c\n", i, &str[i], str[i]);
	printf("���� NumOfAlpha�� �ּ� = %d, data = %d\n", &NumOfAlpha, NumOfAlpha);

	printf("���ڿ�? ");
	gets(str);

	for (int i = 0; i < strlen(str); i++) {
		if (isalpha(str[i]))
			NumOfAlpha++;
	}
	printf("�������� ���� : %d\n", NumOfAlpha);

	for (int i = 0; i < 70; i++)       //     ���ڿ� �Է� �� memory ���
		printf("str[%2d]�� �ּ� = %d, data = %c\n", i, &str[i], str[i]);
	printf("���� NumOfAlpha�� �ּ� = %d, data = %d\n", &NumOfAlpha, NumOfAlpha);
}
