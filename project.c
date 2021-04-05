#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void func(int x, int multiple)
{
	if (x <= 0) {
		exit(0);
	}
	else {
		for (int i = 1; i <= multiple; i++) {
			 printf("%d ", x * i);
		}
	}
}

int main(void) 
{
	int interger = 1;
	while (interger > 0) {
		printf("Á¤¼ö? : ");
		scanf("%d", &interger);
		func(interger, 20);
		printf("\n");
	}
}
