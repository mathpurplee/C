#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned int red = 0, green = 0, blue = 0, result = 0;
	printf("red? : ");
	scanf("%d", &red);
	printf("green? : ");
	scanf("%d", &green);
	printf("blue? : ");
	scanf("%d", &blue);

	if (red > 255)
		red = 0;
	else if (green > 255)
		green = 0;
	else if (blue > 255)
		blue = 0;

	result = red | (green << 8) | (blue << 16);
	printf("%X", result);
	return 0;
}