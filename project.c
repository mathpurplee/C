#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100
#define STR_SIZE 40

struct content {
	char title[STR_SIZE];
	int price;
	double rate;
};

int main(void)
{
	struct content* arr[MAX] = { NULL };       // ����ü ������ �迭 ����
	int cnt = 0;                                       // ������ �Ҵ�� content ����ü�� ����
	
	while (cnt < MAX) {
		char title[STR_SIZE] = "";
		printf("�������� ����մϴ�.(. �Է� �� ����)\n����? ");
		gets(title);
		
		if (strcmp(title, ".") == 0) 
			break;

		arr[cnt] = (struct content*)malloc(sizeof(struct content));
		strcpy(arr[cnt]->title, title);
		printf("����? ");
		scanf("%d", &arr[cnt]->price);
		arr[cnt]->rate = 5.0;
		cnt++;
		while (getchar() != '\n') {}               // �Է� ���� ����
	}
	printf("%-20s %5s %4s\n", "����", "����", "����");
	for (int i = 0; i < cnt; i++) 
		printf("%-20s %5d %4.1f\n", arr[i]->title, arr[i]->price, arr[i]->rate);
	for (int j = 0; j < cnt; j++) {
		free(arr[j]);
		arr[j] = NULL;
	}
}