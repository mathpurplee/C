#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct content {
	char title[40];
	int price;
	double rate;
};

int main(void)
{
	struct content arr[] = {
		{"Avengers", 1000, 8.8}, {"Aquaman", 550, 7.1}, {"Shazam!", 7700, 7.4},
		{"X-Men", 3300, 8.0}, {"US", 8800, 7.1}, {"Inception", 2200, 8.7}
	};
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("size = %d\n", size); // 6
	printf("sizeof(arr) = %d\n", sizeof(arr)); // 336
	printf("sizeof(arr[0]) = %d\n", sizeof(arr[0])); // 56

	int i;             // 찾을 구조체 배열 원소의 인덱스
	char title[40];  // 검색할 콘텐츠 제목을 저장할 변수

	printf("제목? ");
	gets(title);

	for (i = 0; i < size; i++) {
		if (strcmp(arr[i].title, title) == 0) 
			break;
	}
	if (i == size)
		printf("해당 콘텐츠를 찾을 수 없습니다.");
	else
		printf("%s의 가격 = %d, 평점 = %.1f\n", arr[i].title, arr[i].price, arr[i].rate);
}
