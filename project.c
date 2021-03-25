#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int time = 0;

	int si = 0;
	int bun = 0;
	int cho = 0;

	printf("재생 시간(초)? : ");
	scanf("%d", &time);

	cho = time % 60;
	time /= 60;
	bun = time % 60;
	si = time / 60;
	
	printf("재생 시간은 %d시간 %d분 %d초입니다.", si, bun, cho);
	return 0;



	
}