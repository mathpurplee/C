#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100
#define STR_SIZE 10

struct employee {
	char name[STR_SIZE];
	char depart[STR_SIZE];
	int salary;
};

int main(void)
{
	struct employee* group[MAX] = { NULL };
	int i;
	int cnt = 0;
	while (cnt < MAX) {
		char temp[STR_SIZE] = "";                // �ӽ� ����
		printf("\n����� ���� �̸�? ");
		gets(temp);
		if (strcmp(temp, ".") == 0)
			break;
		group[cnt] = (struct employee*)malloc(sizeof(struct employee));
		strcpy(group[cnt]->name, temp);
		printf("<<������ group[%d]�� �ּ� = %d, data = %d>>\n", cnt, &group[cnt], group[cnt]);
		printf("<group[%d]->name�� �ּ� = %d, data = %s>\n", cnt, &group[cnt]->name, group[cnt]->name);

		printf("�μ���? ");
		gets(group[cnt]->depart);
		printf("<group[%d]->depart�� �ּ� = %d, data = %s>\n", cnt, &group[cnt]->depart, group[cnt]->depart);

		printf("����(����)? ");
		scanf("%d", &group[cnt]->salary);
		printf("<group[%d]->salary�� �ּ� = %d, data = %d>\n", cnt, &group[cnt]->salary, group[cnt]->salary);
		cnt++;
		while (getchar() != '\n') {}
	}
	printf("%\n%d���� ������ ����߽��ϴ�.\n", cnt);
	for (i = 0; i < cnt; i++)
		printf("%s / %s / %d����\n", group[i]->name, group[i]->depart, group[i]->salary);
	for (i = 0; i < cnt; i++) {
		free(group[i]);
		group[i] = NULL;
	}
}