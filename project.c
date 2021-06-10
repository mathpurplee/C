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

	printf("ln�� �ּ� = %d\n", &ln);
	printf("ln.start�� �ּ� = %d, ln.start.x�� �ּ� = %d, ln.start.y�� �ּ� = %d\n", &ln.start, &ln.start.x, &ln.start.y);
	printf("ln.end�� �ּ� = %d, ln.end.x�� �ּ� = %d, ln.end.y�� �ּ� = %d\n", &ln.end, &ln.end.x, &ln.end.y);
	printf("\n");

	printf("<ln.start�� ��ǥ>\n");
	print_point(&ln.start);
	printf("<ln.end�� ��ǥ>\n");
	print_point(&ln.end);

	printf("\n���� : %f\n", get_length(&ln));
}

void print_point(const struct point* ptr) {
	printf("print_point�Լ��� �����ͺ��� ptr�� �ּ� = %d, data = %d\n", &ptr, ptr);
	printf("(%d, %d) \n", ptr->x, ptr->y);
}

double get_length(const struct line* ptr) {
	printf("get_length�Լ��� �����ͺ��� ptr�� �ּ� = %d, data = %d\n", &ptr, ptr);
	int dx = ptr->end.x - ptr->start.x;
	int dy = ptr->end.y - ptr->start.y;
	return sqrt(dx * dx + dy * dy);
}