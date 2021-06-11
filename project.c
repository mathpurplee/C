#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int* test_memory(int cnt) { // 리턴형이 'int 포인터형'
	int* p = (int*)malloc(sizeof(int) * cnt);  // 함수 내에서 동적 메모리 할당
	for (int i = 0; i < cnt; i++)
		p[i] = 0;
	return p; // (중요) int*형 포인터 p가 가리키는 동적메모리 주소를 리턴
}

int main(void)
{
	int* p = test_memory(5);
	printf("main함수의 int 포인터 p의 주소 = %d, data = %d\n", &p, p);
	for (int i = 0; i < 5; i++) {
		printf("포인터 p가 가리키는 동적 메모리 p[%d]의 주소 = %d, data = %d\n", i, &p[i], *(p+i));
	}
}