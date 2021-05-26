#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STR 128

char* join_string(const char* s1, const char* s2)
{
	int len = 0;
	char* p = NULL;
	
	if (s1 == NULL || s2 == NULL)
		return NULL;                        // join_string 실패
	
	len = strlen(s1) + strlen(s2) + 1;
	p = (char*)malloc(sizeof(char) * len);
	strcpy(p, s1);
	strcat(p, s2);
	return p;
}

int main(void)
{
	char s1[MAX_STR] = "";
	char s2[MAX_STR] = "";
	char* s3 = NULL;

	printf("첫 번째 문자열? ");
	gets(s1);
	printf("두 번째 문자열? ");
	gets(s2);
	
	s3 = join_string(s1, s2);
	if (s3 != NULL) 
		printf("연결된 문자열 : %s\n", s3);
	free(s3);
	s3 = NULL;
}