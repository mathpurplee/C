#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_seconds(int, int, int);

int main(void)
{
	int hour, min, sec;

	printf("�ð�, ��, �ʸ� �Է� : ");
	scanf("%d %d %d", &hour, &min, &sec);
	printf("%d�ð� %d�� %d�� = %d��", hour, min, sec, get_seconds(hour, min, sec));
}

int get_seconds(int hour, int min, int sec)
{
	int result = 0;
	result += hour * 60 * 60;
	result += min * 60;
	result += sec;
	return result;

}

