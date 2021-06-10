#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct point {
	int x, y;
};

struct line {
	struct point start, end;
};

void print_point(struct point* ptr);
double get_length(const struct line* ptr);

int main() {
	struct line ln = {
		{10, 20}, {30, 40}
	};

	printf("ln의 주소 = %d\n", &ln);
	printf("ln.start의 주소 = %d, ln.start.x의 주소 = %d, ln.start.y의 주소 = %d\n", &ln.start, &ln.start.x, &ln.start.y);
	printf("ln.end의 주소 = %d, ln.end.x의 주소 = %d, ln.end.y의 주소 = %d\n", &ln.end, &ln.end.x, &ln.end.y);
	printf("\n");

	printf("<ln.start의 좌표>\n");
	print_point(&ln.start);
	printf("<ln.end의 좌표>\n");
	print_point(&ln.end);

	printf("\n길이 : %f\n", get_length(&ln));
}

void print_point(const struct point* ptr) {
	printf("print_point함수의 포인터변수 ptr의 주소 = %d, data = %d\n", &ptr, ptr);
	printf("(%d, %d) \n", ptr->x, ptr->y);
}

double get_length(const struct line* ptr) {
	printf("get_length함수의 포인터변수 ptr의 주소 = %d, data = %d\n", &ptr, ptr);
	int dx = ptr->end.x - ptr->start.x;
	int dy = ptr->end.y - ptr->start.y;
	return sqrt(dx * dx + dy * dy);
}