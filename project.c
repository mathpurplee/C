#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[70] = "";
	int NumOfAlpha = 0;

	for (int i = 0; i < 70; i++)       //     문자열 입력 전 memory 출력
		printf("str[%2d]의 주소 = %d, data = %c\n", i, &str[i], str[i]);
	printf("변수 NumOfAlpha의 주소 = %d, data = %d\n", &NumOfAlpha, NumOfAlpha);

	printf("문자열? ");
	gets(str);

	for (int i = 0; i < strlen(str); i++) {
		if (isalpha(str[i]))
			NumOfAlpha++;
	}
	printf("영문자의 개수 : %d\n", NumOfAlpha);

	for (int i = 0; i < 70; i++)       //     문자열 입력 후 memory 출력
		printf("str[%2d]의 주소 = %d, data = %c\n", i, &str[i], str[i]);
	printf("변수 NumOfAlpha의 주소 = %d, data = %d\n", &NumOfAlpha, NumOfAlpha);
}
