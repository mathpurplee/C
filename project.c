#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2)
{
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main()
{
	double x1, x2, y1, y2;
	printf("������ ������ ��ǥ? : ");
	scanf("%lf %lf", &x1, &y1);
	printf("������ ���� ��ǥ? : ");
	scanf("%lf %lf", &x2, &y2);
	double res = distance(x1, y1, x2, y2);
	printf("(%.lf, %.lf)~(%.lf, %.lf) ������ ���� : %.6lf", x1, y1, x2, y2, res);
}
