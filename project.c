#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100
#define STR_SIZE 40

struct content {
	char title[STR_SIZE];
	int price;
	double rate;
};

int main(void)
{
	struct content* arr[MAX] = { NULL };       // 구조체 포인터 배열 선언
	int cnt = 0;                                       // 실제로 할당된 content 구조체의 개수
	
	while (cnt < MAX) {
		char title[STR_SIZE] = "";
		printf("콘텐츠를 등록합니다.(. 입력 시 종료)\n제목? ");
		gets(title);
		
		if (strcmp(title, ".") == 0) 
			break;

		arr[cnt] = (struct content*)malloc(sizeof(struct content));
		strcpy(arr[cnt]->title, title);
		printf("가격? ");
		scanf("%d", &arr[cnt]->price);
		arr[cnt]->rate = 5.0;
		cnt++;
		while (getchar() != '\n') {}               // 입력 버퍼 비우기
	}
	printf("%-20s %5s %4s\n", "제목", "가격", "평점");
	for (int i = 0; i < cnt; i++) 
		printf("%-20s %5d %4.1f\n", arr[i]->title, arr[i]->price, arr[i]->rate);
	for (int j = 0; j < cnt; j++) {
		free(arr[j]);
		arr[j] = NULL;
	}
}