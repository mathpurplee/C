#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char phone[] = "010-123-4567";
	char* p = NULL;

	printf("배열 phone[]의 주소 = %d, data = %s\n", phone, phone);  // 배열의 이름은 배열의 시작 주소 
	for (int i = 0; i < strlen(phone); i++) 
		printf("phone[%2d]의 주소 = %d, data = %c\n", i, &phone[i], phone[i]);
	printf("\n");

	p = strtok(phone, "-"); // 첫 번째 토큰 p[3] = "-"의 주소 리턴
	printf("포인터 변수 p의 주소 = %d, data = %d,  NULL확인 p[3] = %s\n", &p, p, p[3]);

	p = strtok(NULL, "-"); // 두 번째 토큰 p[7] = "-"의 주소 리턴
	printf("포인터 변수 p의 주소 = %d, data = %d,  NULL확인 p[3] = %s\n", &p, p, p[3]);

	p = strtok(NULL, "-"); // 두 번째 토큰 p[12]= "-"의 주소 리턴
	printf("포인터 변수 p의 주소 = %d, data = %d,  NULL확인 p[4] = %s\n", &p, p, p[4]);
}