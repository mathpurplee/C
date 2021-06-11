#define _CRT_SECURE_NO_WARNINGS
#define MAX_STR 128
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* join_string(const char* s1, const char* s2) {
	int len = 0;
	char* p = NULL;

	if (s1 == NULL || s2 == NULL) // join_string 실패
		return NULL;

	printf("포인터 s1의 주소 = %d, data = %d, size = %d\n", &s1, s1, sizeof(s1));
	printf("포인터 s2의 주소 = %d, data = %d, size = %d\n", &s2, s2, sizeof(s2));

	len = strlen(s1) + strlen(s2) + 1;
	p = (char*)malloc(sizeof(char) * len); // 함수 내의 포인터 변수 p에 동적메모리 할당, p에는 동적메모리 주소 리턴

	strcpy(p, s1); // copy
	strcat(p, s2); // connect

	printf("포인터 p의 주소 = %d, data = %d, size = %d\n", &p, p, sizeof(p));
	return p; // (중요) char*형 포인터 p가 가리키는 동적메모리 주소 리턴
}

int main(void)
{
	char s1[MAX_STR] = "";
	char s2[MAX_STR] = "";
	char* s3 = NULL;

	printf("배열 s1의 주소 = %d, data = %d, size = %d\n", s1, s1[0], sizeof(s1));
	printf("배열 s2의 주소 = %d, data = %d, size = %d\n", s2, s2[0], sizeof(s2));
	printf("포인터 s3의 주소 = %d, data = %d, size = %d\n", s2, s2[0], sizeof(s2));

	printf("첫 번째 문자열? ");
	gets(s1);
	printf("두 번째 문자열? ");
	gets(s2);
	s3 = join_string(s1, s2);
	
	if (s3 != NULL) {
		printf("포인터 s3의 주소 = %d, data = %d, size = %d\n", &s3, s3, sizeof(s3));
		printf("연결된 문자열 : %s\n", s3);
	}
	free(s3);
	s3 = NULL;
}