#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int mae = 0;
	int jill = 0;
	double nong = 100;


	printf("���? : ");
	scanf("%d", &mae);
	printf("����? : ");
	scanf("%d", &jill);

	nong *= (double)jill / (mae + jill); // �ǿ����� �� �ϳ��� double�� ����ȯ�ϸ� ���� �Ǽ��� ���� �� ����

	printf("�� : %.2lf %", nong);
}
