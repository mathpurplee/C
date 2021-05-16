#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse_string(char* str)
{
	char temp = "";
	printf("문자 변수 temp의 주소 = %d, data = %c\n", &temp, temp);
	printf("포인터 변수 str의 주소 = %d, data = %d\n", &str, str);
	for (int i = 0, j = strlen(str) - 1; i < j; i++, j--) {
		printf("(바꾸기 전)str[%2d]의 주소 = %d, data = %c / str[%2d]의 주소 = %d, data = %c / temp의 data = %c\n", i, &str[i], str[i], j, &str[j], str[j], temp);
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		printf("(바꾸기 후)str[%2d]의 주소 = %d, data = %c / str[%2d]의 주소 = %d, data = %c / temp의 data = %c\n", i, &str[i], str[i], j, &str[j], str[j], temp);
	}
}

int main()
{
	char s[15] = "";
	for (int i = 0; i < 15; i++)
		printf("문자열배열 s[%2d]의 주소 = %d, data = %c\n", i, &s[i], s[i]);

	printf("문자열? ");
	gets(s);

	reverse_string(s); 
    printf("역순으로 된 문자열 : %s\n", s);
	for (int i = 0; i < 15; i++)
		printf("문자열배열 s[%2d]의 주소 = %d, data = %c\n", i, &s[i], s[i]);
}