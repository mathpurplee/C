#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x1, x2, y1, y2;
	double m = 0;

	printf("A�� ��ǥ (x1, y1)? : ");
	scanf("%d %d", &x1, &y1);
	printf("B�� ��ǥ (x2, y2)? : ");
	scanf("%d %d", &x2, &y2);
	m = (double)(y2 - y1) / (x2 - x1);
	printf("������ ���� : %.6lf", m);
}