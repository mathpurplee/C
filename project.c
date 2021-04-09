#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int select = 1;

void menu(void)
{
	printf("[1.파일 열기 2.파일 저장 3.인쇄 0.종료] 선택? : ");
	scanf("%d", &select);
	if (select == 0)
		exit(0);
	else if (select == 1)
		printf("파일 열기를 수행합니다.\n");
	else if (select == 2)
		printf("파일 저장을 수행합니다.\n");
	else if (select == 3)
		printf("파일 인쇄를 수행합니다.\n");
	else
		printf("0-3번 중 입력하세요.\n");
}

int main(void) {
	while (select != 0)
		menu();
}

