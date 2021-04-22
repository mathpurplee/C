#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_seconds(int, int, int);

int main(void)
{
	int hour, min, sec;

	printf("시간, 분, 초를 입력 : ");
	scanf("%d %d %d", &hour, &min, &sec);
	printf("%d시간 %d분 %d초 = %d초", hour, min, sec, get_seconds(hour, min, sec));
}

int get_seconds(int hour, int min, int sec)
{
	int result = 0;
	result += hour * 60 * 60;
	result += min * 60;
	result += sec;
	return result;

}

