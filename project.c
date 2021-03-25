#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;
	printf("8진수로 입력하려면 012, 16진수로 입력하려면 0x12처럼 입력하세요.\n정수? ");
	scanf("%i", &x); // 0x12 입력

	printf("8진수 : %#o\n", x); // 022
	printf("10진수 : %d\n", x); // 18
	printf("16진수 : %#x\n", x); // 0x12
	return 0;


}