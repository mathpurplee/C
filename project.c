#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct point {
	int x, y;
};
void print_point(const struct point* ptr); // ptr�� �Է� �Ű�����
void move_point(struct point* ptr, int offset); // ptr�� ����� �Ű�����

int main()
{
	struct point arr[] = {
		{10, 20}, {35, 41}, {12, 63}, {72, 55}, {92, 86}, {4, 27}
	};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i, offset;

	for (i = 0; i < size; i++) {
		print_point(&arr[i]);
	}
	printf("\n");

	printf("�̵��� ������? ");
	scanf("%d", &offset);
	for (i = 0; i < size; i++) {
		move_point(&arr[i], offset);
		print_point(&arr[i]);
	}
}

void print_point(const struct point* ptr)
{
	printf("(%d, %d) ", ptr->x, ptr->y);
}

void move_point(struct point* ptr, int offset)
{
	ptr->x += offset;
	ptr->y += offset;
}