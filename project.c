#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int* test_memory(int cnt) { // �������� 'int ��������'
	int* p = (int*)malloc(sizeof(int) * cnt);  // �Լ� ������ ���� �޸� �Ҵ�
	for (int i = 0; i < cnt; i++)
		p[i] = 0;
	return p; // (�߿�) int*�� ������ p�� ����Ű�� �����޸� �ּҸ� ����
}

int main(void)
{
	int* p = test_memory(5);
	printf("main�Լ��� int ������ p�� �ּ� = %d, data = %d\n", &p, p);
	for (int i = 0; i < 5; i++) {
		printf("������ p�� ����Ű�� ���� �޸� p[%d]�� �ּ� = %d, data = %d\n", i, &p[i], *(p+i));
	}
}