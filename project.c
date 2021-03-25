#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int month;

	printf("몇 월? : ");
	scanf("%d", &month);

	month > 0 && month < 13 ? printf("%d월 입니다.", month) : printf("잘못된 값입니다.");
	return 0;
}
