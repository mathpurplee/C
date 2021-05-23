#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct point {
	int x, y;
};
struct rect {
	struct point left_bottom, right_bottom;
};
print_rect_info(const struct rect* r)
{
	printf("[RECT 좌하단점 : (%d, %d) 우상단점 : (%d, %d)]", r->left_bottom.x, r->left_bottom.y, r->right_bottom.x, r->right_bottom.y);
}

int main()
{
	struct rect r = { 0 };
	printf("직사각형의 좌하단점(x, y)? ");
	scanf("%d %d", &r.left_bottom.x, &r.left_bottom.y);
	printf("직사각형의 우상단점(x, y)? ");
	scanf("%d %d", &r.right_bottom.x, &r.right_bottom.y);
	print_rect_info(&r);
}