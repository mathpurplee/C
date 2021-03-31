#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void draw_line(char, int);
double get_area(double radius);

int main(void) 
{
	int r=0;
	printf("main()의 지역변수 r의 주소 = %d, data = %d\n", &r, r);

	draw_line('-', 40);
	for (r = 5; r <= 20; r += 5) {
		printf("r=%d, 원의 면적:%.2f\n", r, get_area(r));
	}
	draw_line('-', 40);
}

double get_area(double radius)
{
	printf("매개변수 radius의 주소 = %d, data = %lf\n", &radius, radius);
	const double pi = 3.14;
	printf("상수 pi의 주소 = %d, data = %f\n", &pi, pi);
	return pi * radius * radius;
}

void draw_line(char ch, int len)
{
	printf("매개변수 ch의 주소 = %d, data = %c\n", &ch, ch);
	printf("매개변수 len의 주소 = %d, data = %d\n", &len, len);

	int r=0;
	printf("draw_line()의 지역변수 r의 주소 = %d, data = %d\n", &r, r);

	for (r = 0; r < len; r++) {
		printf("%c", ch);
	}
	printf("\n");
}
