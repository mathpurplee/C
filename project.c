#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse_string(char* str)
{
	char temp = "";
	printf("���� ���� temp�� �ּ� = %d, data = %c\n", &temp, temp);
	printf("������ ���� str�� �ּ� = %d, data = %d\n", &str, str);
	for (int i = 0, j = strlen(str) - 1; i < j; i++, j--) {
		printf("(�ٲٱ� ��)str[%2d]�� �ּ� = %d, data = %c / str[%2d]�� �ּ� = %d, data = %c / temp�� data = %c\n", i, &str[i], str[i], j, &str[j], str[j], temp);
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		printf("(�ٲٱ� ��)str[%2d]�� �ּ� = %d, data = %c / str[%2d]�� �ּ� = %d, data = %c / temp�� data = %c\n", i, &str[i], str[i], j, &str[j], str[j], temp);
	}
}

int main()
{
	char s[15] = "";
	for (int i = 0; i < 15; i++)
		printf("���ڿ��迭 s[%2d]�� �ּ� = %d, data = %c\n", i, &s[i], s[i]);

	printf("���ڿ�? ");
	gets(s);

	reverse_string(s); 
    printf("�������� �� ���ڿ� : %s\n", s);
	for (int i = 0; i < 15; i++)
		printf("���ڿ��迭 s[%2d]�� �ּ� = %d, data = %c\n", i, &s[i], s[i]);
}