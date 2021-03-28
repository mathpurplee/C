#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int score = 0;

	printf("점수? : ");
	scanf("%d", &score);

	if (score >= 90 && score <= 100)
		printf("학점 : A");
	else if (score >= 80 && score < 90)
		printf("학점 : B");
	else if (score >= 70 && score < 80)
		printf("학점 : C");
	else if (score >= 60 && score < 70)
		printf("학점 : D");
	else if (score >= 0 && score < 60)
		printf("학점 : F");
	else
		printf("다시 입력하세요.");
	return 0;
}