#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	unsigned int num = 0;
	unsigned int byte_0 = 0x000000ff;
	unsigned int byte_1 = 0x0000ff00;
	unsigned int byte_2 = 0x00ff0000;
	unsigned int byte_3 = 0xff000000;
	
	printf("16진수로 데이터를 입력하세요 : ");
	scanf("%x", &num);

	printf("byte 0 : %8x\n", num & byte_0);
	printf("byte 1 : %8x\n", num & byte_1);
	printf("byte 2 : %8x\n", num & byte_2);
	printf("byte 3 : %8x\n", num & byte_3);
	return 0;
}