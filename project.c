#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int time = 0;

	int si = 0;
	int bun = 0;
	int cho = 0;

	printf("��� �ð�(��)? : ");
	scanf("%d", &time);

	cho = time % 60;
	time /= 60;
	bun = time % 60;
	si = time / 60;
	
	printf("��� �ð��� %d�ð� %d�� %d���Դϴ�.", si, bun, cho);
	return 0;



	
}