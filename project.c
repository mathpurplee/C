#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;
	printf("8������ �Է��Ϸ��� 012, 16������ �Է��Ϸ��� 0x12ó�� �Է��ϼ���.\n����? ");
	scanf("%i", &x); // 0x12 �Է�

	printf("8���� : %#o\n", x); // 022
	printf("10���� : %d\n", x); // 18
	printf("16���� : %#x\n", x); // 0x12
	return 0;


}