#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x1, x2, y1, y2;
	double m = 0;

	printf("A의 좌표 (x1, y1)? : ");
	scanf("%d %d", &x1, &y1);
	printf("B의 좌표 (x2, y2)? : ");
	scanf("%d %d", &x2, &y2);
	m = (double)(y2 - y1) / (x2 - x1);
	printf("직선의 기울기 : %.6lf", m);
}